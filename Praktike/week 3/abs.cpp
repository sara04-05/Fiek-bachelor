#include <iostream>
using namespace std;

int main(){

    // int x=-6;
    // int vlera_absolute = ( x>=0 ) ? x : -x;

    int x;
    cout << "Jep nje numer te plote: ";
    cin >> x;
    int vlera_absolute = ( x>=0 ) ? x : -x;
    cout << "Vlera absolute e x eshte: " << vlera_absolute << endl;


    return 0;
}