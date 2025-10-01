#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int x1, y1, x2, y2;
    float distancaEuklidiane, distancaMenhatane;

    cout << "Vendos koordinatat e pikes se pare (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Vendos koordinatat e pikes se dyte (x2, y2): ";
    cin >> x2 >> y2;

    distancaEuklidiane= sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "Distanca euklidiane mes dy pikave eshte: " << distancaEuklidiane << endl;
//   cout << setprecision(2);
//   cout  << fixed;
//   cout<< distancaEuklidiane;
//    cout <<endl;

    distancaMenhatane= abs(x2 - x1) + abs(y2 - y1);
    cout << "Distanca Menhatane mes dy pikave eshte: " << distancaMenhatane << endl;


return 0;   
}