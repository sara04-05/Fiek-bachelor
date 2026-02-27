/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të deklarohet një variabël x e cila mund të ruaj numra të plotë
b.
[1 pikë] Përmes një unaze, duke përdorur variablën x, të lexohen numra të plotë në mënyrë të vazhdueshme
c.
[2 pikë] Leximi duhet të vazhdoj përderisa përdoruesi nuk shtyp 3 herë numrin 0 (jo detyrimisht radhazi)
d.
[1 pikë] Gjatë leximit të vlerave të kalkulohet shuma e anëtarëve e numrave dyshifror dhe pozitiv.
*/

#include <iostream>
using namespace std;

int main(){

    int x, nrzerove=0, shuma=0;

    while(true){
        cout<<"Vendosni numrin tuaj";
        cin>>x;

        if(x == 0){
            nrzerove++;
        }else if(x>9 && x<100){
            shuma= shuma+x;
        }

        if (nrzerove == 3)
        {
            break;
        }
    }
    cout << "Rezultati: " << shuma << endl;


return 0;
}