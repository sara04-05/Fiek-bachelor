/*
Detyra: Rrotullo vargun prapa (Reverse Array)
Krijo një varg me 6 elemente.
Jep inputin e 6 numrave nga përdoruesi.
Shfaq numrat fillimisht në renditje të dhënë, pastaj në renditje të kundërt.
*/

#include <iostream>
using namespace std;

int main() {
    const int numrat = 6;
    int v[numrat];

    for(int i = 0; i < numrat; i++) {
        cout << "Vendosni numrin tuaj: ";
        cin >> v[i];
    }

    // Shfaq vargun origjinal
    cout << "Vargu origjinal: ";
    for(int i = 0; i < numrat; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Shfaq vargun në renditje të kundërt
    cout << "Vargu i rrotulluar: ";
    for(int i = numrat - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
