/*
Janë dhënë kërkesat si në vijim:
a.
[1 pikë] Të deklarohen dy variabla me emrat x dhe y, të cilat ruajnë numra të plotë dhe inicializohen me vlera përmes tastierës
b.
[1 pikë] Të llogaritet shuma e numrave prej x deri në y (supozojmë x < y).
c.
[2 pikë] Gjatë kalkulimit të shumës, në rast se numri aktual është i plotpjesëtueshëm me 6, shumës t’i zbritet gjysma numrit aktual
d.
[1 pikë] Të shtypet rezultati i arritur në fund të programit.
*/

#include <iostream>
using namespace std;

int main()
{
	// a
    int x, y, shuma = 0;

    cout << "Shenoni vleren e x: ";
    cin >> x;
    cout << "Shenoni vleren e y: ";
    cin >> y;
     
    // b
    for (int i = x; i <= y; i++)
    {
        shuma += i;
        // c
        if (i % 6 == 0)
        {
            shuma += (i / 2);
        }
    }

    // d
    cout << "Shuma: " << shuma;

    return 0;
}