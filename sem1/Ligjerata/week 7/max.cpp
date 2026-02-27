#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const int n=7;
    float vargu[n]={3.5, 8, 10, 4, 6.7, 3, 2};
    float max=vargu[0];

    for(int i=1; i<n-1; i++){
        if(vargu[i]>max){
            max=vargu[i];
            cout<<"Prova\n";
        }
    }


    
    cout<<"Vlera maksimale eshte: "<<max<<endl;

    return 0;
}