/*
2. [4 pikë] Të zgjidhet detyra si vazhdimësi e detyrës 1, duke mos e ri-shkruar pjesën paraprake:
a. [3 pikë] Të definohen metoda get për anëtarët privat të klasës, ashtu që tip kthyes të jetë void.
b. [1 pikë] Brenda funksionit main, të krijohet një instancë e klasës Filmi, dhe të thirret një nga funksionet get të deklaruara në pikën a.
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

    Filmi(string e, int viti, int vler) {
        emri = e;
        vitiProdhimit = viti;
        vleresimi = vler;
    }

    void getEmri(string& dalja) {
        dalja = emri;
    }

    void getVitiProdhimit(int& dalja) {
        dalja = vitiProdhimit;
    }

    void getVleresimi(int& dalja) {
        dalja = vleresimi;
    }
};

int main() {
    Filmi f("The Matrix", 1999, 4);
    f.numriShikimeve = 500000;

    string emri;
    f.getEmri(emri);
    cout << emri << endl;

    return 0;
}
