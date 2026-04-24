#include <iostream>
#include <list>

using namespace std;


int main(){

    int numruesi = 0;
    list<float> lista;
 
    for(int i=0; i<=6; i++){
        float value;

        cout << "Vendosni numrat tuaj:"<<endl;
        cin >> value;
        if( value >= 2,0 && value <= 2,9 ){
            lista.push_back(value);
        }else{
            lista.push_front(value);
        };
    };

    for(int i=0; i<=numruesi; i++){
        lista.pop_back();
    };

    for(int i=0; i<=numruesi; i++){
        lista.pop_back();
    };
    for( auto it=lista.begin(); it!=lista.end(); it++){
        if(*it>=2 && *it<=2.9){
            lista.erase(it);
        }
    }
    return 0;
}
