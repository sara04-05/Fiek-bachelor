/*
Detyra: Numërimi i elementeve pozitive dhe negative në një varg
Krijo një varg me 10 elemente .
Jep inputin e elementeve nga përdoruesi (mund të jenë pozitive ose negative).
Numëro sa elemente janë pozitive dhe sa janë negative.
Shfaq këto numra në ekran.
*/

#include <iostream>
using namespace std;

int main(){

    const int numrat = 10;
    int v[numrat];
    int pos=0, neg=0;

    for(int i=0; i<numrat; i++){
        cout<<"Vendosni numrat tuaj (Mundesisht te perfshijne vlera pozitive dhe negative):"<<endl;
        cin>>v[i];
    };

    for(int i = 0; i < numrat; i++) {
    if(v[i] > 0) pos++;      // shton tek pozitive
    else if(v[i] < 0) neg++; // shton tek negative
    }

    cout<<"Nga numrat e dhene ju keni:"<< pos <<" numra pozitiv"<<endl;
    cout<<"Nga numrat e dhene ju keni:"<< neg <<" numra negativ"<<endl;
    return 0;
}