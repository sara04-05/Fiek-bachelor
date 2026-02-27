/*
Deklaro variablat minVal dhe maxVal.
Përdor dy for loops për të kaluar të gjithë elementet e matricës dhe për të gjetur minimumin dhe maksimumin.
Në fund, printo rezultatin.
*/

#include <iostream>
using namespace std;

int main(){

    int matrix[3][3] ={
        {5, -3, 9},
        {0, 4, -2},
        {7, 1, 6},
    };

    int minVal = matrix[0][0];
    int maxVal = matrix[0][0];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j] < minVal){
                minVal = matrix[i][j];
            };
            if(matrix[i][j] > maxVal){
                maxVal = matrix[i][j];
            };
        }
    }

    cout << "Elementi minimal eshte: " << minVal << endl;
    cout << "Elementi maksimal eshte: " << maxVal << endl;

    return 0;
}