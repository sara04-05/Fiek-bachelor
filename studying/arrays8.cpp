/*
Shembulli 2: Gjej elementin më i vogël i vargut
*/

#include <iostream>
using namespace std;

int main() {
    const int numrat = 7;
    int v[numrat];
    int min;

    for(int i = 0; i < numrat; i++) {
        cin >> v[i];
    }

    min = v[0];

    for(int i = 1; i < numrat; i++) {
        if(v[i] < min) min = v[i];
    }

    cout << "Elementi me i vogel eshte: " << min << endl;
    return 0;
}
