/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të deklarohet një variabël me emrin a dhe të inicalizohet me një vlerë sipas dëshirës në deklarim.
b.
[1 pikë] Të deklarohet një variabël me emrin b, e cila inicializohet me vlerë përmes tastierës.
c.
[2 pikë] Në rast se vlera e variablës b është më e madhe se vlera e variablës a, të përsëritet leximi i variablës b, duke përdorur komandën goto ose unazën while.
d.
[1 pikë] Të shtypet numri se sa herë është përsëritur leximi i variablës b.
*/

#include <iostream>
using namespace std;

int main() {
    int a=10, b, perseritja = 0;
    
    cout << "Vendos vleren e b: ";
    cin >> b;
     while (b > a) {
        perseritja++;
        cout << "Vendosni përsëri b: ";
        cin >> b;
    }
        cout << "Numri i perseritjeve te B-se eshte: " << perseritja << endl;
        cout<<"Vlera e B-se eshte: " << b << endl;

    return 0;
}
