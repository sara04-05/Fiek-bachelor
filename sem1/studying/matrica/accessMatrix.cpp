/*
We need two loops nested inside each other to go through a 2D array. 
First loop is used to move though the rows of 2D array, 
while other is used to move though columns in each row to access all the elements of the row.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[2][4] = {0, 1, 2, 3, 4, 5, 6, 7};
    
    // Outer loop to move through rows
    for (int i = 0; i < 2; i++) {
        
        // Inner loop to move though elements in each row
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}