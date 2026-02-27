#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers you want: ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++) {
        cout << a << endl;
        int c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}
