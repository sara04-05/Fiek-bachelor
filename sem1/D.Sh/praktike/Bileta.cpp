#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int mosha;
    string dita;
    double qmimi, qmimi_baze, zbritje_mosha, zbritje_dite; 
    qmimi_baze = 8.00;
    qmimi = qmimi_baze; 
    zbritje_mosha = 0.0;
    zbritje_dite = 0.0;

    cout<<"Jepni moshen e juaj"<<endl;
    cin>>mosha;
    cout<<"Jepeni diten kur deshironi te shifni filmin (hene, marte, merkure, enjte, premte, shtune, diele)"<<endl;
    cin>>dita;

    
    if(mosha <= 11 ){
        zbritje_mosha = qmimi_baze * 0.50; 
    }
    else if(mosha >= 12 && mosha <= 18){
        zbritje_mosha = qmimi_baze * 0.30; 
    }
    else if(mosha >= 65){
        zbritje_mosha = qmimi_baze * 0.40; 
    }
        qmimi -= zbritje_mosha; 

    
    if (dita == "hene" || dita == "marte" || dita == "merkure" || dita == "enjte" || dita == "premte") {
        zbritje_dite = qmimi * 0.20;
        qmimi -= zbritje_dite;
    }
    else if(dita == "shtune" || dita == "diele"){

    }
    else{
        cout << "Kerkesa juaj nuk ekziston" << endl;
    }

    cout<<"Qmimi Baze: "<< qmimi_baze << "€" << endl; 
    cout<<"Zbritje mosha: "<< zbritje_mosha << "€" << endl; 
    cout << "Zbritje dite: " << zbritje_dite << "€" << endl; 
    cout << "Për të paguar: " << qmimi << "€" << endl; 

    return 0;
}