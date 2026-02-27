/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të lexohet një numër i plotë dhe pozitiv nga tastiera. Leximi i numrit të përsëritet derisa të plotësohen kriteret e caktuara,
 duke përdorur unazën do-while. Numri i lexuar paraqet numrin e biletave që do të blihen për një film.
b.
[1 pikë] Të deklarohet si konstante çmimi i biletës me vlerë 3.25$.
c.
[2 pikë] Varësisht nga numri i biletave, aplikohet një zbritje në shumën totale, ku prej 1-3 bileta, nuk ka zbritje, 
4-7 vlen zbritja prej 3$, kurse mbi 7 bileta vlen zbritja prej 10$. Të llogaritet zbritja varësisht nga numri i biletave duke e përdorur 
kushtëzimin përmes switch.
d.
[1 pikë] Të kalkulohet dhe shtypet totali i faturës në bazë të numrit të biletave të lexuara në fillim të programit.
*/

#include <iostream>
using namespace std;

int main() {

    int bileta;
    const double cmimi = 3.25;
    double zbritja = 0, totali;

    do {
        cout << "Vendosni numrin e biletave: ";
        cin >> bileta;
    } while (bileta <= 0);

    switch (bileta) {
        case 1:
        case 2:
        case 3:
            zbritja = 0;
            break;

        case 4:
        case 5:
        case 6:
        case 7:
            zbritja = 3;
            break;

        default:
            zbritja = 10;
            break;
    }

    totali = bileta * cmimi - zbritja;

    cout << "Zbritja: $" << zbritja << endl;
    cout << "Totali per t'u paguar: $" << totali << endl;

    return 0;
}
