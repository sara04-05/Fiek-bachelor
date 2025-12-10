/*
A multi-dimensional array can be defined as an array that has more than one dimension.
Having more than one dimension means that it can grow in multiple directions. 
Some popular multidimensional arrays include 2D arrays which grows in two dimensions, and 3D arrays which grows in three dimensions.
*/

#include <iostream>
using namespace std;

int main() {
    
    // declaring and initializing a 2D array
    // with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    /*
    int matrix[3][4] declares a 2D array with 3 rows and 4 columns.
    The array is initialized using nested braces {} for each row.
    */

    // printing the elements of the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
We use two nested for loops to access and print each element: the outer loop for rows and the inner loop for columns.
matrix[i][j] accesses the element at the i-th row and j-th column.
*/