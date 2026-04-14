/*
1. [12 pikë] Të definohet klasa Filmi sipas pikave në vijim:
a. [1 pikë] Klasa të ketë anëtarët: emri (privat), vitiProdhimit (privat), vleresimi (privat), numri i shikimeve (publik).
b. [1 pikë] Klasa të ketë të definuar një konstruktor me parametra, i cili inicializon anëtarët privat të klasës
c. [1 pikë] Klasa të ketë të definuar një destruktor, brenda të cilit printohet një mesazh “Brenda destruktorit”
d. [2 pikë] Të definohen metoda get për secilin nga anëtarët privat të klasës.
e. [1.5 pikë] Të definohet metoda set për anëtarin vleresimi, ashtu që vlerësimi të jetë në rangun 1-5.
f. [2.5 pikë] Të definohet funksioni mesatarja, e cila kthen numrin e shikimeve të filmit për secilin ditë që nga dita e prodhimit (supozohët se viti i prodhimit është i plotë, kurse viti aktual nuk mos përfshihet në kalkulim)
g. [1 pikë] Brenda funksionit main, të deklarohet një instancë e klasës Filmi, përmes së cilës inicializohen të gjithë anëtarët e klasës.
h. [1 pikë] Të printohet emri dhe viti i prodhimit për instancën e krijuar.
i. [1 pikë] Të printohet mesatarja e shikimeve për instancën e krijuar.
*/

#include <iostream>
#include <string>

using namespace std;

class Filmi {
private:
    string emri;
    int vitiProdhimit;
    int vleresimi;

public:
    int numriShikimeve;

    // b) Konstruktori inicializon vetem anetaret private
    Filmi(string e, int viti, int vler) {
        emri = e;
        vitiProdhimit = viti;
        vleresimi = vler;
    }

    // c)
    ~Filmi() {
        cout << "Brenda destruktorit" << endl;
    }

    // d)
    string getEmri() {
        return emri;
    }

    int getVitiProdhimit() {
        return vitiProdhimit;
    }

    int getVleresimi() {
        return vleresimi;
    }

    // e) Vleresimi vetem 1-5
    void setVleresimi(int v) {
        if (v >= 1 && v <= 5) {
            vleresimi = v;
        }
    }

    // f) Mesatarja e shikimeve ne dite: nga viti i prodhimit (i plote) deri ne vitin para vitit aktual
    double mesatarja(int vitiAktual) {
        int vitiFundit = vitiAktual - 1;
        int gjithsejDite = 0;

        for (int v = vitiProdhimit; v <= vitiFundit; v++) {
            bool vitBrishte = (v % 4 == 0 && v % 100 != 0) || (v % 400 == 0);
            if (vitBrishte) {
                gjithsejDite += 366;
            } else {
                gjithsejDite += 365;
            }
        }

        if (gjithsejDite == 0) {
            return 0;
        }

        return (double)numriShikimeve / (double)gjithsejDite;
    }
};

int main() {
    int vitiAktual = 2026;

    // g) Instance + te gjithe anetaret (publici ne main)
    Filmi filmi("Inception", 2010, 5);
    filmi.numriShikimeve = 1500000;

    // h)
    cout << "Emri: " << filmi.getEmri() << endl;
    cout << "Viti i prodhimit: " << filmi.getVitiProdhimit() << endl;

    // i)
    cout << "Mesatarja e shikimeve ne dite: " << filmi.mesatarja(vitiAktual) << endl;

    return 0;
}
