#include <iostream>
using namespace std;

int main(){
    int dita;

    do{
    cout<<"Vendosni diten e javes (1-7):";
    cin>>dita;
    }while(dita<1||dita>7);

    return 0;
}