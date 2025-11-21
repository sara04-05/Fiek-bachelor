/*
Të shkruhet programi sipas kërkesave në vijim
a.
[1 pikë] Të deklarohet një variabël e cila mund të ruaj numra jo të plotë me emrin paga, e cila inicializohet me vlerë nga tastiera, e cila paraqet pagën mujore bruto të një punëtori.
b.
[1 pikë] Të llogaritet dhe të printohet 5% e kësaj shume. Kjo vlerë parqet kontributin e punëtorit në trustin pensional.
c.
[2 pikë] Të llogaritet dhe të printohet tatimi në pagë. Tatimi në pagë është 7% e shumes se mbetur pasi nga paga bruto zbresim kontributin pensional (5%)
d.
[1 pikë] Në fund të programit, të tregohet paga të cilin punëtori e pranon, pas pagesës së të gjitha obligimeve.
*/
#include <iostream>
using namespace std;

int main()
{
    // a
    float paga;

    cout << "Shenoni pagen: ";
    cin >> paga;

    // b
    float kontributiPensional = 5 * paga / 100;
    // c
    float tatimiNePage = 7 * (paga - kontributiPensional) / 100;
    // d
    cout << "Paga finale: " << paga - kontributiPensional - tatimiNePage << endl;

    return 0;
}