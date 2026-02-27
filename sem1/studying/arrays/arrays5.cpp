/*
Detyra: Shkëput elementët çift dhe tek nga një varg
Krijo një varg me 10 elemente.
Jep inputin e 10 numrave nga përdoruesi.
Shfaq elementët çift në një rresht dhe elementët tek në një tjetër.
*/

#include <iostream>
using namespace std;

int main(){

    const int numrat=10;
    int v[numrat];
    int qift=0, tek=0;

    for(int i=0; i<numrat; i++){
        cout<<"Vendosni numrat tuaj:"<<endl;
        cin>>v[i];
    };

   for(int i = 0; i < numrat; i++) {
    if(v[i] % 2 == 0) {
        cout << v[i] << " ";  // shfaq numrin qift
    }
    }
    cout << endl;

    for(int i = 0; i < numrat; i++) {
    if(v[i] % 2 != 0) {
        cout << v[i] << " ";  // shfaq numrin tek
    }
    }
    cout << endl;

    return 0;
}