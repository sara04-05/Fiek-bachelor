/*
Detyra: Gjej numrin maksimal dhe minimal në një varg
Krijo një varg me 8 elemente.
Jep inputin e elementeve nga përdoruesi.
Gjej dhe shfaq vlerën më të madhe dhe vlerën më të vogël në varg.
*/

#include <iostream>
using namespace std;

int main() {
    const int numrat = 8;       // madhësia e vargut
    int v[numrat];              // vargu për të ruajtur elementët
    int max, min;               // variablat për max dhe min

    // Input i elementeve
    for(int i = 0; i < numrat; i++) {
        cout << "Jepni numrin tuaj: ";
        cin >> v[i];
    }

    // Inicializo max dhe min me vlerën e parë
    max = v[0];
    min = v[0];

    // Krahaso çdo element tjetër për të gjetur max dhe min
    for(int i = 1; i < numrat; i++) {
        if(v[i] > max) max = v[i];
        if(v[i] < min) min = v[i];
    }

    // Shfaq rezultatin
    cout << "Vlera me e madhe: " << max << endl;
    cout << "Vlera me e vogel: " << min << endl;

    return 0;
}