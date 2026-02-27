/*
Detyra: Shuma dhe mesatarja e elementeve të vargut
Krijo një varg me 10 elemente.
Jep inputin e elementeve nga përdoruesi.
Llogarit shumën e të gjithë elementeve të vargut.
Llogarit mesataren e tyre.
Shfaq shumën dhe mesataren në ekran.
*/

#include <iostream>
using namespace std;

int main(){

    const int numrat=10;
    int v[numrat];
    int shuma = 0;
    double mesatarja;


    for(int i=0; i<numrat; i++){
        cout<<"Jepni numrin tuaj:"<<endl;
        cin>>v[i];

    };

      for(int i=0; i<numrat; i++){
        shuma +=v[i];
        
    };

        mesatarja= shuma/(double)numrat;

    cout<<"Shuma e elementeve tuaja eshte:"<< shuma <<endl;
    cout<<"Mesatarja e elementeve tuaja eshte:"<< mesatarja <<endl;

  
    return 0;
}