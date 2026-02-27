/*
Shembulli 1: Numëro sa elementë janë më të mëdhenj se 5
*/

#include <iostream>
using namespace std;

int main() {
    const int numrat = 8;
    int v[numrat];
    int count = 0;

    for(int i = 0; i < numrat; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < numrat; i++) {
        if(v[i] > 5) count++;
    }

    cout << "Numri i elementeve me te medhenj se 5: " << count << endl;
    return 0;
}
