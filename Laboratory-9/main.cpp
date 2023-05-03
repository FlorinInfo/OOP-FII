#include <iostream>
#include <stdio.h>


template <typename K, typename V>
class Map {
private:
    K* keys;
    V* values;
    int size;
    int capacity;

public:
    Map() {
        this->size = 0;
        this->capacity = 10;
        this->keys = new K[capacity];
        this->values = new V[capacity];
    }

    ~Map() {
        delete[] this->keys;
        delete[] this->values;
    }

    V& operator[](const K& key) {
        int index = findKey(key);
        if (index == -1) {
            if (this->size == this->capacity) {
                resize();
            }
            this->keys[size] = key;
            index = size;
            this->size++;
        }
        return values[index];
    }

    class MapIterator {
    public:
        K* keys;
        V* values;
        int index;

        struct T {
            K key;
            V value;
            int index;
        };

        T operator*() const {
            return { keys[index], values[index], index };
        }


        MapIterator& operator++() {
            index++;
            return *this;
        }

        bool operator!=(const MapIterator& it) const {
            return this->index != it.index;
        }
    };

    MapIterator begin() {
        return { keys, values, 0 };
    }

    MapIterator end() {
        return { keys, values, size };
    }

    void Set(const K& key, const V& value) {
        (*this)[key] = value;
    }

    bool Get(const K& key, V& value) {
        int index = findKey(key);
        if (index == -1) {
            return false;
        }
        value = values[index];
        return true;
    }

    int Count() const {
        return this->size;
    }

    void Clear() {
        this->size = 0;
    }

    bool Delete(const K& key) {
        int index = findKey(key);
        if (index == -1) {
            return false;
        }
        for (int i = index; i < this->size - 1; i++) {
            this->keys[i] = this->keys[i + 1];
            this->values[i] = this->values[i + 1];
        }
        this->size--;
        return true;
    }

    bool Includes(const Map<K, V>& map) {
        for (int i = 0; i < map.size; i++) {
            if (findKey(map.keys[i]) == -1) {
                return false;
            }
        }
        return true;
    }

    int findKey(const K& key) const {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                return i;
            }
        }
        return -1;
    }

    void resize() {
        this->capacity++;
        K* newKeys = new K[capacity];
        V* newValues = new V[capacity];

        for (int i = 0; i < this->size; i++) {
            newKeys[i] = this->keys[i];
            newValues[i] = this->values[i];
        }

        delete[] this->keys;
        delete[] this->values;

        this->keys = newKeys;
        this->values = newValues;
    }
};

int main() {
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";
    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";
    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    return 0;
}