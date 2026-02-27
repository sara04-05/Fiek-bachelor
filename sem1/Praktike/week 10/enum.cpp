#include <iostream>
using namespace std;

enum Makina{
    Veture,
    Kamion, 
    Autobus
};

void pershkruajMakinen(Makina m){

    if(m == Veture){
        cout<<"Makina juaj eshte veture"<<endl;
    }else if(m == Kamion){
        cout<<"Makina juaj eshte kamion"<<endl;
    } else if(m == Autobus){
        cout<<"Makina juaj eshte autobus"<<endl;
    }
}

int main(){

    pershkruajMakinen(Kamion);

    return 0;
}