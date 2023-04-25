#include <fstream>
#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main()
{
    map<string,int>Words;
    fstream f("/Users/florindev/Desktop/OOP-FII-main/Laboratory-8/test", fstream::in );
    string phrase;
    getline( f, phrase, '\0');
    f.close();

    string delimiter = " ,?!."; // define the separators
    string word;
    size_t pos = 0;

    while ((pos = phrase.find_first_not_of(delimiter, pos)) != std::string::npos) {
        size_t end = phrase.find_first_of(delimiter, pos);
        word = phrase.substr(pos, end - pos);
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        Words[word]++;
        pos = end;
    }

    auto cmp = [](pair<string,int> a, pair<string,int> b) {
        if(a.second > b.second) return false;
        if(a.second < b.second) return true;
        else {
            if(a.second < b.second) return false;
            else if(a.second==b.second) {
                if(a.first > b.first) return true;else return  false;
            }
        }
    };

    priority_queue<pair<string, int>,vector<pair<string, int>>,decltype(cmp)> pq(cmp);
    for (auto& entry : Words) {
        pq.push(entry);
    }

    while (!pq.empty()) {
        cout << pq.top().first << " => " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}