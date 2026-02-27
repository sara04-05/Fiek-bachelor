#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double x;
    double y;
    cout << "-------------------\n";
    cout << "  x      y=e-x\n";
    cout << "-------------------\n";
    for (x = 0; x <= 5; x = x + 0.6)
    {
        y = exp(-x);
        cout << "| " << setprecision(1) << fixed << x
             << "  |   " << setprecision(4) << fixed << y << "   |\n";
             //setprecision e percakton numrin e shifrave pas presjes dhjetore, fixed ben qe te shfaqen gjithmone shifrat pas presjes dhjetore
    }
    cout << "-------------------\n";
    return 0;
}