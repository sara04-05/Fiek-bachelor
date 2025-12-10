/*
We can use sizeof() method to find the size of an array.
*/

#include <iostream>
using namespace std;

int main() {
    
    // creating 2d and 3d array
    int arr[2][4];

    // using sizeof() operator to 
    // get size of arr
    cout << sizeof(arr) << " bytes";
    return 0;
}