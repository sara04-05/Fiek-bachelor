/*
Te shkruhet programi sipas kerkesave ne vijim:  
a. Te deklarohen tri variabla per ruajtjen e numrave te plote a, b, c
b. Te deklarohet pointeri p i cili merr si vlere adresen e variablen a,
pointeri p1 i cili merr per vlere adresen e variables b dhe pointeri p2, 
i cili merr per vlere adresen e variables c
c. Te inicializohen me vlerea variablat e deklaruara ne piken a permes pointereve te deklaruar
d. Te printohet shuma e vlerave ku pointojne secili nga pointeret e deklaruar
e. Sa do te jete vlera e shprehjes (*p) +3, per a = 2, b=6, c=5?
*/

#include <iostream>

using namespace std;


int main() {
    // a) Deklarimi i variablave
    int a, b, c;

    // b) Deklarimi i pointerëve me adresat përkatëse
    int* p = &a;
    int* p1 = &b;
    int* p2 = &c;

    // c) Inicializimi përmes pointerëve
    *p = 2;
    *p1 = 6;
    *p2 = 5;

    // d) Shuma e vlerave ku tregojnë p, p1, p2
    int shuma = *p + *p1 + *p2;
    cout << "Shuma e vlerave (*p + *p1 + *p2): " << shuma << std::endl;

    // e) Vlera e shprehjes (*p)+3 për a=2 (tashmë *p == 2)
    cout << "(*p) + 3 = " << (*p) + 3 << std::endl;

    return 0;
}
