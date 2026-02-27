/*
Gjetja e mesatares se matrices
*/

#include <iostream>
using namespace std;

int main(){
    
    int matrix[3][3] = {
        {8, 4, -5},
        {2, 9, 7},
        {-3, 6, 1}
    };
    
    int sum = 0;
    
    // Llogaritja e shumës
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    
    // Numri i elementeve të matricës
    int num_elements = 3 * 3;  // Matrica është 3x3, pra ka 9 elemente
    
    // Llogaritja e mesatares
    double average = sum / (double)num_elements;
    
    cout << "Shuma e elementeve tuaja eshte: " << sum << endl;
    cout << "Mesatarja e elementeve eshte: " << average << endl;

    return 0;
}
