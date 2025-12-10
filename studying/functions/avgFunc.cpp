/*
Gjetja e mesatares me function
*/

#include <iostream>
using namespace std;

// Funksioni për llogaritjen e mesatares
double mesatarja(int matrix[3][3], int rows, int cols) {
    int sum = 0;
    int elemNum = rows * cols;

    // Llogaritja e shumës së elementeve
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Llogaritja e mesatares
    return sum / (double)elemNum;
}

int main() {
    int matrix[3][3] = {
        {8, 4, -5},
        {2, 9, 7},
        {-3, 6, 1}
    };

    // Thirrja e funksionit për mesataren
    double avg = mesatarja(matrix, 3, 3);

    // Shfaqja e rezultatit
    cout << "Mesatarja e elementeve të matricës është: " << avg << endl;

    return 0;
}
