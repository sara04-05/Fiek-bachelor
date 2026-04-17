// #include <iostream>
// using namespace std;

// int main(){

//     int a=10;
//     int *aPTR = &a;
    
//     cout<< "Variabla eshte:" << a<<endl;
//     cout<< "Adresa e variables eshte:" << aPTR <<endl;
    
//     *aPTR = 12;
//     cout<< "Vlera e nderruar e variables a eshte" << *aPTR <<endl;

//     return 0;
// }

/*
Detyra 1: Pointeri i Dyfishtë
Të shkruhet kodi sipas kërkesave në vijim:

Të deklarohet një numër jo i plotë me emrin o.
Të deklarohet një pointer, i cili si vlerë merr adresën e variablës o.
Të deklarohet një pointer i dyfishtë, i cili në fillim është i pa-inicializuar.
Përmes pointerit të dyfishtë t'i caktohet vlera variablës a, duke u nisur nga pikat paraprake të detyrës.
Të printohet vlera e variablës a.
*/

// #include <iostream>
// using namespace std;

// int main(){
//     float o=0;;
//     float *oPTR = &o;
//     float **oPTRPTR = &oPTR;

//     **oPTRPTR = 15;
    
//     cout<< "Vlera e var o eshte:" << o;
// }

/*
Detyra 2: Pointeri si Parametër Funksioni
Të shkruhet programi sipas kërkesave në vijim:

Të definohet funksioni faktorieli, i cili kalkulon faktorielin e një numri të pranuar si parametër.
Funksioni i definuar në pikën a, të kthej rezultatin për numrin e dhënë përmes një parametri pointer.
Brenda funksionit main, të thirret funksioni faktorieli me parametrat e nevojshëm.
Brenda funksionit main, të printohet rezultati për faktorielin e kalkuluar.
*/
#include <iostream>
using namespace std;

 void faktorieli(int a, int *rez){

    *rez = 1;

    for(int i = 1; i <=a; i++){
        *rez = (*rez) *i;
    }
        
}


int main(){
    int numri = 3;
    int rezultati;
   faktorieli(numri, &rezultati);

   cout << "Faktorieli eshte:" <<rezultati;

    return 0;
}