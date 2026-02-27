/*
Deklaro minVal dhe maxVal.
Përdor dy for loops për të kaluar nëpër matricën dhe për të gjetur minimumin dhe maksimumin.
Printo rezultatin pas përfundimit.
*/

 #include <iostream>
 using namespace std;

 int main(){

    int matrix[3][3]={
        {-1, 12, 5},
        {8, 3, 7},
        {2, -6, 11}   
    };

    int minVal = matrix[0][0];
    int maxVal = matrix[0][0];


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j]< minVal){
                minVal = matrix[i][j];
            }
            if(matrix[i][j]> maxVal){
                maxVal = matrix[i][j];
            }
        }
    }
    
    cout<< "Numri minimal eshte: " <<minVal <<endl;
    cout<< "Numri maksimal eshte: " <<maxVal <<endl;

    return 0;
 }