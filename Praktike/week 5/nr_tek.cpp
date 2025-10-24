#include <iostream>
using namespace std;

//Printo numrat deri ne n
//Mos i printo numrat prej 10 deri ne 30
//Maksimumi le te jete 301

int main(){

    int count=1;
    int n;
    cout<<"Vendosni vleren e n:";
    cin>>n;

    while(count<=n){

        if(count>301){
            break;
        }

        if(count>=10 && count<=30){
            count++;
            continue;
        }

        if(count %2 == 1){
            cout<<count<<endl;
        }

    }


    return 0;
}

