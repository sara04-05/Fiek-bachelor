/*
Të shkruhet programi sipas kërkesave në vijim:
a.[1 pikë] Të lexohet një numër i plotë dhe pozitiv nga tastiera, i cili paraqet numrin e produkteve të blera.
Leximi duhet të përsëritet derisa të jepet vlerë valide, duke përdorur unazën do-while.
b.[1 pikë] Të deklarohet një konstante që paraqet çmimin e një produkti, me vlerë 2.80$.
c.[2 pikë] Në varësi të numrit të produkteve, të llogaritet kostoja totale dhe të aplikohet zbritje si vijon:
    - 1–5 produkte: nuk ka zbritje,
    - 6–10 produkte: zbritje 5% në total,
    - mbi 10 produkte: zbritje 12% në total.
Zbritja të përcaktohet duke përdorur kushtëzimin përmes switch.
d.[1 pikë] Të kalkulohet dhe të shtypet në ekran totali përfundimtar pas aplikimit të zbritjes.
*/

#include <iostream>
using namespace std;

int main() {
    int prod;
    const double cmimi = 2.80;
    double totali;
    double zbritja = 0.0;

    do {
        cout << "Vendosni numrin e produkteve tuaja:" << endl;
        cin >> prod;
    } while(prod <= 0);

    switch(prod) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            zbritja = 0.0;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            zbritja = 0.05;
            break;
        default:
            zbritja = 0.12;
            break;
    }

    totali = prod * cmimi * (1 - zbritja);

    cout << "Numri juaj i produkteve eshte: " << prod << endl;
    cout << "Zbritja per produktet eshte: " << zbritja * 100 << "%" << endl;
    cout << "Shuma qe do te paguani eshte: $" << totali << endl;

    return 0;
}
