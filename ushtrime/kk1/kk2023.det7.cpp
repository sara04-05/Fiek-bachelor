/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të lexohen 200 numra jo të plotë nga tastiera.
b.
[2 pikë] Të gjendet dhe shtypet vlera maksimale nga numrat e lexuar
c.
[2 pikë] Të tregohet se sa nga numrat e lexuar janë një shifror
*/

#include <iostream>
using namespace std;

int main(){

    const int numrat=200;
    float nr[numrat];
    float max;
    int shifror=0;
    //a
    for(int i=0; i<numrat; i++){
        cout<<"Jepni numrin "<<i+1<<": ";
        cin>>nr[i];
    }
    //b
    max=nr[0];
    for(int i=1; i<numrat; i++){
        if(nr[i]>max){
            max=nr[i];
        }
    }
    cout<<"Vlera maksimale eshte: "<<
    max<<endl;
    //c
    for(int i=0; i<numrat; i++){
        if(nr[i]>=-9 && nr[i]<=9 && nr[i]!=0){
            shifror++;
        }
    }
    cout<<"Numrat nje shifror jane: "<<shifror<<endl;    

    return 0;
}