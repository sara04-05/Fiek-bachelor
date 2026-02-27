#include <iostream>
using namespace std;

int numroCift(int vargu[], int m){
    int rezultati=0;
    for(int i=0; i<m;i++){
        if(vargu[i]%2==0){
            rezultati++;
        }
    }

    return rezultati;
}

int main(){
    const int m=5;
    int A[m]={-2,4,6,3,1};
    cout<<"Numri i vlerave qift eshte: "<<numroCift(A,m)<<endl;

    return 0;
}