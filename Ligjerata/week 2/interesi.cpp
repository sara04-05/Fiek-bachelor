#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int P, n, t;
    double r;
    double A;
    cout << "Shkruaj vleren per kapitalin fillestar: ";
    cin >> P;
    cout << "Shkruaj vleren per normen e interesit : ";
    cin >> r;
    cout << "Shkruaj vleren per numrin e periudhave: ";
    cin >> n;
    cout << "Shkruaj kohen qe parate jane investuar: ";
    cin >> t;
    
    A= P * pow((1 + r/n), n*t);

    cout << "Shuma totale e parave pas interesit: " << A << endl;
    return 0;
}