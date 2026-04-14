/*
1. [12 pikë] Të definohet klasa Kompjuteri sipas pikave në vijim:
a. [1 pikë] Klasa të ketë anëtarët: brendi (privat), procesori (privat), memoria (publik), ram (publik).
b. [1 pikë] Klasa të ketë të definuar një konstruktor pa parametra, i cili inicializon anëtarët privat të klasës
c. [1 pikë] Klasa të ketë të definuar një destruktor, brenda të cilit printohet një mesazh “Brenda destruktorit”
d. [2 pikë] Të definohen metoda set dhe get për anëtarët privat të klasës
e. [2 pikë] Të definohet metoda shkronja, që kthen shkronjën e parë të brendit të kompjuterit.
f. [2 pikë] Të definohet metoda validimi, me tip kthyes void, që kontrollon nëse memoria e kompjuterit është më e vogël se dyshifror RAM memories. Për rastin e tillë, të vendoset RAM memoria 2, kurse memoria të jetë sa dy herë më shumë se ajo.
g. [1 pikë] Brenda funksionit main, të deklarohet një instancë e klasës Kompjuteri, përmes së cilës inicializohen të gjithë anëtarët e klasës.
h. [1 pikë] Brenda funksionit main, të printohen brendi, procesori, memoria dhe RAM për instancën e krijuar.
i. [1 pikë] Brenda funksionit main, të thirret metoda shkronja dhe validimi, si dhe të printohet dalja për funksionet që kthejnë rezultat.
*/
#include <iostream>
#include <string>
using namespace std;

class Kompjuteri {
private:
    string brendi;
    string procesori;

public:
    int memoria;
    int ram;

    Kompjuteri() {
        brendi = "";
        procesori = "";
        memoria = 0;
        ram = 0;
    }

    ~Kompjuteri() {
        cout << "Brenda destruktorit\n";
    }

    void setBrendi(string b) {
        brendi = b;
    }

    string getBrendi() {
        return brendi;
    }

    void setProcesori(string p) {
        procesori = p;
    }

    string getProcesori() {
        return procesori;
    }

    char shkronja() {
        return brendi[0];
    }

    void validimi() {
        if (ram >= 10 && ram <= 99) {
            if (memoria < ram) {
                ram = 2;
                memoria = 2 * ram;
            }
        }
    }
};

int main() {
    Kompjuteri k;
    k.setBrendi("Lenovo");
    k.setProcesori("Intel Core i3");
    k.memoria = 5;
    k.ram = 16;

    cout << k.getBrendi() << endl;
    cout << k.getProcesori() << endl;
    cout << k.memoria << endl;
    cout << k.ram << endl;

    cout << k.shkronja() << endl;
    k.validimi();

    return 0;
}
