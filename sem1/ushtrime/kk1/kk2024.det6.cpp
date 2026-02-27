/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të deklarohet një variabël x e cila mund të ruaj numra të plotë
b.
[1 pikë] Përmes një unaze, duke përdorur variablën x, të lexohen numra të plotë në mënyrë të vazhdueshme
c.
[2 pikë] Leximi duhet të vazhdoj përderisa përdoruesi nuk shtyp 3 herë numrin 0 (jo detyrimisht radhazi)
d.
[1 pikë] Gjatë leximit të vlerave të kalkulohet shuma e anëtarëve e numrave dyshifror dhe pozitiv.
*/

#include <iostream>
using namespace std;

int main()
{
	// a
    int x;
    int nrZerove = 0, shumaPozitivDyshifror = 0;

    // b
    while (true)
    {
        cout << "Shenoni nje numer: ";
        cin >> x;

        if (x == 0)
        {
            nrZerove++;
        }
        else if (x > 9 && x < 100) // d
        {
            shumaPozitivDyshifror += x;
        }

        // c
        if (nrZerove == 3)
        {
            break;
        }
    }

    cout << "Rezultati: " << shumaPozitivDyshifror << endl;

    return 0;
}
