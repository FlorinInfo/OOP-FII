#include <iostream>
#include <vector>
using namespace std;

enum class TipContact {
    Prieten,
    Cunoscut,
    Coleg
};

class Contact {
private:
    string nume;
public:
    Contact(const string& nume) : nume(nume) {}
    virtual string getNume() { return nume; }
    virtual TipContact getTipContact() const = 0;
};

class Prieten : public Contact {
private:
    string dataNastere;
    string numarTelefon;
    string adresa;
public:
    Prieten(const string& nume, const string& dataNastere, const string& 
numarTelefon, const string& adresa)
            : Contact(nume), dataNastere(dataNastere), 
numarTelefon(numarTelefon), adresa(adresa) {}
    string getDataNastere() {
        return dataNastere;
    }
    string getNumarTelefon() {
        return numarTelefon;
    }
    string getAdresa() {
        return adresa;
    }
    TipContact getTipContact() const override {
        return TipContact::Prieten;
    }
};

class Cunoscut : public Contact {
private:
    string numarTelefon;
public:
    Cunoscut(const string& nume, const string& numarTelefon)
            : Contact(nume), numarTelefon(numarTelefon) {}
    string getNumarTelefon() {
        return numarTelefon;
    }
    TipContact getTipContact() const override {
        return TipContact::Cunoscut;
    }
};

class Coleg : public Contact {
private:
    string numarTelefon;
    string firma;
    string adresa;
public:
    Coleg(const string& nume, const string& numarTelefon, const string& 
firma, const string& adresa)
            : Contact(nume), numarTelefon(numarTelefon), firma(firma), 
adresa(adresa) {}
    string getNumarTelefon() {
        return numarTelefon;
    }
    string getFirma() {
        return firma;
    }
    string getAdresa() {
        return adresa;
    }
    TipContact getTipContact() const override {
        return TipContact::Coleg;
    }
};

class Agenda {
private:
    vector<Contact*> contacte;
public:
    Contact* cautareContact(const string& nume) {
        for (auto contact : contacte) {
            if (contact->getNume() == nume) {
                return contact;
            }
        }
        return nullptr;
    }

    vector<Prieten*> getListaPrieteni() {
        vector<Prieten*> prieteni;
        for (auto contact : contacte) {
            if (contact->getTipContact() == TipContact::Prieten) {
                prieteni.push_back(static_cast<Prieten*>(contact));
            }
        }
        return prieteni;
    }

    void stergereContact(const string& nume) {
        for (auto it = contacte.begin(); it != contacte.end(); ++it) {
            if ((*it)->getNume() == nume) {
                delete* it;
                contacte.erase(it);
                cout << "Contactul cu numele " << nume << " a fost 
sters.\n";
                break;
            }
        }
        cout << "Contactul cu numele " << nume << " nu a fost gasit in 
agenda.\n";
    }

    void adaugareContact(Contact* contact) {
        contacte.push_back(contact);
    }
};
int main() {

    Agenda agenda;

    Prieten* prieten1 = new Prieten("Florin", "02/12/2008", "33884782323", 
"Iasi, Aleea M.Sadoveanu 55");
    agenda.adaugareContact(prieten1);
    Cunoscut* cunoscut1 = new Cunoscut("Radu", "88888888888");
    agenda.adaugareContact(cunoscut1);
    Coleg* coleg1 = new Coleg("Gicu", "99999999", "Starnet", "Bulevardul 
Carol");
    agenda.adaugareContact(coleg1);

    string nume = "Radu";
    Contact* contactGasit = agenda.cautareContact(nume);
    if (contactGasit != nullptr) {
        cout << "Contactul " << nume << " a fost gasit in agenda.\n";
    }
    else {
        cout << "Contactul " << nume << " nu a fost gasit in agenda.\n";
    }
    vector<Prieten*> prieteni = agenda.getListaPrieteni();
    cout << "Prieteni din agenda:\n";
    for (const auto& prieten : prieteni) {
        cout << "Nume: " << prieten->getNume() << ", data de nastere: " << 
prieten->getDataNastere()
             << ", numar de telefon: " << prieten->getNumarTelefon() << ", 
adresa: " << prieten->getAdresa() << "\n";
    }

    string numeDeSters = "Alex";
    agenda.stergereContact(numeDeSters);


    return 0;
}

