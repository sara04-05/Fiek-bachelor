/*
Gjej shumen e të gjithë elementeve të matricës.
*/


#include <iostream>
using namespace std;

int main(){

    int matrix[3][3]={
        {3, 6, -2},
        {4, 0, 5},
        {1, 7, -3}
    };

    int sum=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += matrix[i][j];
        }
    }

    cout<<"Shuma e te gjitha elementeve te matrices eshte:"<<sum<<endl;

    return 0;
}