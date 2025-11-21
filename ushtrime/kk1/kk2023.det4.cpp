/*
Janë dhënë kërkesat si në vijim:
a.
[1 pikë] Të deklarohet një variabël me emrin n, e cila mund të ruaj numra të plotë, e cila inicializohet me vlerë nga tastiera.
b.
[1 pikë] Të llogaritet shuma e numrave prej 1 deri në n.
c.
[2 pikë] Gjatë kalkulimit të shumës, çdo tre iterime, shumës së arritur deri në atë pikë t’i zbritet vlera 5.
d.
[1 pikë] Të shtypet rezultati i arritur në fund të programit.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n, s=0;
    cout<< "Vendos vleren e n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        s=s+i;
        if(i%3==0){
            s=s-5;
        }
    }
cout<<"s="<<s<<endl;


    return 0;
}