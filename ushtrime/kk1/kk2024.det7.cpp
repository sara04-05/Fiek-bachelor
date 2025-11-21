/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të deklarohet një varg i cili mund të ruaj 10 numra të plotë.
b.
[1 pikë] Vargu të mbushet me vlera nga tastiera, duke përdorur një unazë
c.
[1 pikë] Gjatë mbushjes së vargut, në rast se numri i lexuar është numër tek, të shndërrohet në numrin e parë më të madh çift (p.sh. 3 të shndërrohet në 4)
d.
[2 pikë] Të tregohet se sa numra janë shndërruar nga numri tek në çift
*/

#include <iostream>
using namespace std;

int main()
{
    // a
    const int nrElementeve = 10;
    int vargu[nrElementeve];

    int numratShnderruar = 0;
    // b
    for (int i = 0; i < nrElementeve; i++)
    {
        cout << "Shenoni nje numer: ";
        cin >> vargu[i];
        // c
        if (vargu[i] % 2 != 0)
        {
            vargu[i] += 1;
            numratShnderruar++;
        }
    }
    // d
    cout << "Numrat e shnderruar nga tek ne cift: " << numratShnderruar << endl;

    return 0;
}