/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të deklarohen tri variabla a, b dhe c, të cilat mund të ruajnë numra të plotë.
b.
[1 pikë] Vlera e variablës a, të lexohet nga tastiera.
c.
[1 pikë] Vlera e variablës c të jetë dyfishi i variablës a, kurse vlera e variablës b të jetë dyfishi i shumës së variablave a dhe c.
d.
[1 pikë] Të shtypet herësi i variablës b dhe c.
e.
[1 pikë] Cila do të jetë dalja për vlerën e a = 4?
*/

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Jepeni vleren e a:"<<endl;
    cin>>a;
    c=2*a;
    b=2*(a+c);
    float x=(float)b/c;
    cout<<"Heresi mes b/c eshte:"<<x;

    return 0;
}