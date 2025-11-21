#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 6, c = 4;
    if (a > 2 && b % a == 0)
    {
        if (a + b / 2 - 2 == c)
        {
            cout << setfill('B') << setw(b) << left << b << endl;
            //setfill e percakton karakterin me te cilin do te mbushen vendet bosh, setw e percakton se sa vende do te mbushen, left ben qe te mbushen nga e majta
        }
        cout << a << endl;
    }
    if (b > c)
    {
        cout << showpos << c << endl;
        //showpos ben qe te shfaqet shenja + per numrat pozitiv
    }
    return 0;
}