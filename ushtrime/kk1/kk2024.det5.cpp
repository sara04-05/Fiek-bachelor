/*
Të shkruhet programi i cili llogarit numrin e pikëve të një ekipi të futbollit për 5 ndeshje të zhvilluara
a.
[1 pikë] Të deklarohet një variabël me emrin rez e cila mund të ruaj një karakter.
b.
[1 pikë] Duke përdorur komandën switch të definohen rastet 'F', 'H' dhe 'B'. Për 'F' ekipi fiton 3 pikë, për 'H' fiton 0 pikë, kurse për 'B' fiton 1 pikë. Për rastet kur përdoruesi jep si hyrje një vlerë tjetër, të shtypet një mesazh që karakteri i dhënë nuk është valid.
c.
[2 pikë] Përmes një unaze të lexohet rezultati për 5 ndeshje me anë të variablës rez dhe të kalkulohet totali i pikëve që ekipi ka arritur brenda ndeshjeve të zhvilluara. Në rast se përdoruesi shtyp ndonjë vlerë jashtë 'F', 'H' dhe 'B', të mos kalkulohet si ndeshje valide por leximi për atë ndeshje të përsëritet.
d.
[1 pikë] Të shtypet numri total i pikëve si dhe mesatarja e pikëve për ndeshje.
*/
#include <iostream>
using namespace std;

int main()
{
	// a
    char rez;
    int piket = 0;

    // b, c 
    for (int i = 0; i < 5; i++)
    {
        cout << "Shenoni rezultatin e ndeshjes: ";
        cin >> rez;

        switch (rez)
        {
        case 'F':
            piket += 3;
            break;
        case 'H':
            piket += 0;
            break;
        case 'B':
            piket += 1;
            break;
        default:
            cout << "Rezultat jo valid" << endl;
            i--;
        }
    }

    // d
    cout << "Totali i pikeve te fituara: " << piket << endl;
    cout << "Mesatarja e pikeve per ndeshje: " << piket / 5.0 << endl;

    return 0;
}