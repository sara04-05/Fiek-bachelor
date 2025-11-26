#include <iostream>
using namespace std;

int main(){

    int A[2][5]={
        {2, 5, 8, 3, 10},
        {23, 55, 83, 32, 10}
    };
    int B[10];
    int k=0;
    
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            if(A[i][j] % 2 !=0 ){
                B[k] = A[i][j];
                k++;
            };
        };
    };

        for(int i=0; i<k; i++ ){
            cout<<B[i]<<endl;
        };

    return 0;
}