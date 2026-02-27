#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const int n=5;
    int A[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                A[i][j]=2*(i+1);
            }else if(i<j){
                A[i][j]=i+j;
            }
        }
    }


    return 0;
}