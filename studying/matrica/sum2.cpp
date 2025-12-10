/*
Gjej shumen e të gjithë elementeve të matricës.
*/

#include <iostream>
using namespace std;

int main(){
    
    int matrix[3][3]={
        {8, 4, -5},
        {2, 9, 7},
        {-3, 6, 1}
    };
    int sum=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum +=matrix[i][j];
        }
    }

    cout<<"Shuma e elementeve tuaja eshte:"<< sum <<endl;

    return 0;
}
