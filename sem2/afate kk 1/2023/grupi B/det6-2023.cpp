/*
6. [7 pikë] Të shkruhet kodi sipas kërkesave në vijim:
a. [1 pikë] Të deklarohet një vektor (vector), anëtarët e të cilit mund të ketë karaktere.
b. [2 pikë] Përmes tastierës, të shtohen 7 karaktere brenda vektorit të deklaruar në pikën a.
c. [1 pikë] Të printohet anëtari i fundit i shtuar brenda vektorit.
d. [3 pikë] Të largohen 3 anëtarët e fundit nga vektori.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v;

    cout << "Shkruaj 7 karaktere (pa hapsire, njeri pas tjetrit ose Enter pas secilit):\n";
    for (int i = 0; i < 7; i++) {
        char c;
        cin >> c;
        v.push_back(c);
    }

    cout << "I fundit i shtuar: " << v.back() << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();

    return 0;
}