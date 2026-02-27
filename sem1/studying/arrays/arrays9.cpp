/*
Shembulli 3: Shuma e elementëve tek
*/

#include <iostream>
using namespace std;

int main() {
    const int numrat = 6;
    int v[numrat];
    int shumaTek = 0;

    for(int i = 0; i < numrat; i++) {
        cin >> v[i];
        if(v[i] % 2 != 0) shumaTek += v[i];
    }

    cout << "Shuma e elementeve tek eshte: " << shumaTek << endl;
    return 0;
}
