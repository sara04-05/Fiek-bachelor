/*
4. [5 pikë] Të shkruhet kodi sipas kërkesave në vijim:
a. [1 pikë] Të deklarohet një varg me 5 anëtarë dhe të inicializohet me vlera në deklarim.
b. [1 pikë] Të deklarohet një pointer, të cilit si vlerë i shoqërohet vargu i krijuar në pikën a.
c. [2 pikë] Përmes pointerit, të ndryshohet vlera anëtarit të 3-të brenda vargut.
d. [1 pikë] Të printohen anëtarët e vargut, përmes operatorit të de-referencimit.
*/

#include <iostream>
using namespace std;

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;

    *(p + 2) = 999;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;

    return 0;
}