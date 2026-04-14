/*
4. [5 pikë] Të shkruhet kodi sipas kërkesave në vijim:
a. [1 pikë] Të deklarohet një numër jo i plotë me emrin a.
b. [1 pikë] Të deklarohet një pointer, i cili si vlerë merr adresën e variablës a.
c. [1 pikë] Të deklarohet një pointer i dytë, i cili në fillim është i pa-inicializuar.
d. [1 pikë] Përmes pointerit të dytë të caktohet vlera variablës a, duke u nisur nga pikat paraprake të detyrës.
e. [1 pikë] Të printohet vlera e variablës a.
*/

#include <iostream>

int main() {
    double a;
    double* p1 = &a;
    double* p2;

    p2 = p1;
    *p2 = 3.14159;

    std::cout << a << std::endl;

    return 0;
}
