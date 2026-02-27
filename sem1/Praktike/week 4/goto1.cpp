#include <iostream>

using namespace std;

int main(){
    int dita;
    int perseritja=0;
    cakto_diten:
    cout<<"Vendos diten e javes:"<<endl;
    cin>>dita;

    if(dita>7 || dita<1){
        cout<<"Dita gabim"<<endl;
        perseritja++;
        goto cakto_diten;
        return 0;
    }
   
   cout<<"Perseritjet:"<<perseritja<<endl;

    

    return 0;
}