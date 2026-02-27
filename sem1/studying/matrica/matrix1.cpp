/*
Gjetja e vleres maksimale dhe minimale ne nje matrice 
*/

#include <iostream>
using namespace std;

int main() {
    // Krijojmë një matrice 2D me 3 rreshta dhe 4 kolona
    int matrix[3][4] = {
        {3, 5, 1, 8},
        {9, 2, 6, 7},
        {4, 0, 3, 2}
    };

    // Fillimi i max dhe min me vlerat e para të matricës
    int minVal = matrix[0][0];
    int maxVal = matrix[0][0];

    // Kalimi nëpër të gjitha elementet e matricës për të gjetur min dhe max
    for (int i = 0; i < 3; i++) {  // Për secilin rresht
        for (int j = 0; j < 4; j++) {  // Për secilën kolonë
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];  // Përshtat minimumin
            }
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];  // Përshtat maksimumin
            }
        }
    }

    // Shfaqim rezultatin
    cout << "Elementi minimal është: " << minVal << endl;
    cout << "Elementi maksimal është: " << maxVal << endl;

    return 0;
}
