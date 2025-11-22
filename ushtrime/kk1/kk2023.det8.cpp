/*
Të shkruhet programi sipas kërkesave në vijim
a.
[1 pikë] Të deklarohet një varg me numra të plotë, i cili mund të ruaj 6 numra. Fillimisht të inicializohen të gjithë anëtarët me vlerën 0.
b.
[1 pikë] Përmes tastierës, vargu i deklaruar të mbushet me numra.
c.
[2 pikë] Gjatë leximit të vlerave nga tastiera, në rast se vlera e lexuar është numër çift të ruhet në varg, në të kundërt të mos mbishkruhet vlera 0 e cila është vendosur paraprakisht në varg.
d.
[1 pikë] Në fund të programit, të tregohet se sa nga numrat e lexuar kanë qenë tek dhe nuk janë shtuar në varg.
*/

#include <iostream>
using namespace std;
int main() {
    const int size = 6;
    int numrat[size] = {0}; // a. Inicializimi i vargut me 0
    int tekCount = 0; // Për të numëruar numrat tek

    // b. Mbushja e vargut me numra nga tastiera
    for (int i = 0; i < size; i++) {
        int input;
        cout << "Jepni numrin " << (i + 1) << ": ";
        cin >> input;

        // c. Kontrolli nëse numri është çift ose tek
        if (input % 2 == 0) {
            numrat[i] = input; // Ruajtja në varg nëse është çift
        } else {
            tekCount++; // Rritja e numrit të numrave tek
        }
    }

    // d. Tregimi i numrit të numrave tek
    cout << "Numri i numrave tek te lexuar: " << tekCount << endl;
    cout<<"Numrat e ruajtur ne varg jane:";
    for (int i = 0; i < size; i++) {
        cout << numrat[i] << " ";
    }
    cout << endl;
    return 0;
}