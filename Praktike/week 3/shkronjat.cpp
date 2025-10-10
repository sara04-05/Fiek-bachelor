#include <iostream>
using namespace std;

int main(){
    char shkronja;

    cout << "Vendosni shkronjen e juaj: ";
    cin >> shkronja;

    switch (shkronja) {
        case 'a':
        case 'e':
        case 'ë':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        cout << "Shkronja e vendosur eshte zanore." << endl;
        break;
    default:
        cout << "Shkronja e vendosur eshte bashketingellore." << endl;
        break;
    }


    return 0;
}