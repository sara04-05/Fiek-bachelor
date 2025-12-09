/* Ushtrimi:

Krijo një varg me 6 elemente për të ruajtur notat e studentëve.
Jep inputin e notave nga përdoruesi duke përdorur for loop.
Llogarit numrin e notave që janë më të mëdha ose të barabarta me 7 .
Shfaq këtë numër në ekran.

*/

#include <iostream>
using namespace std;

int main() {
    const int notat = 6;       // madhësia e vargut
    int v[notat];              // vargu për të ruajtur notat
    int count = 0;             // numëruesi i notave >= 7

    // Input i notave
    for(int i = 0; i < notat; i++) {
        cout << "Jepeni noten tuaj: ";
        cin >> v[i];           // çdo input shkon tek v[i]

        if(v[i] >= 7) {       // nëse nota >= 7, rrisim count
            count++;
        }
    }

    cout << "Ju keni gjithsej " << count << " nota >= 7" << endl;

    return 0;
}
