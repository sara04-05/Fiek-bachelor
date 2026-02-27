/*
A Function is a reusable block of code designed to perform a specific task. 
It helps break large programs into smaller, logical parts. 
*/
#include <iostream>
using namespace std;

/*
hello() function: This is a user-defined function that does not take any parameters and does not return a value.
It simply prints "GeeksforGeeks" to the console. The return type void indicates that it doesn't return anything.
*/
void hello() {
    cout << "GeeksforGeeks" << endl;
}

/*
square(int x) function: This is another user-defined function that takes an integer as input and returns the square of that number. 
The return type int means the function will return an integer value. In main(), the function is called with the value 5, 
and the returned result is stored in a variable and printed.
*/
int square(int x) {
    return x * x;
}

/*
main() function: This is the entry point of every C++ program. 
When the program runs, execution starts from the main function. It contains the calls to the other functions.
*/
int main() {

    // Calling the void function
    hello();

    // Calling the return-type function
    int result = square(5);
    cout << "Square of 5 is: " << result << endl;

    return 0;
}