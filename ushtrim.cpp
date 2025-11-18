#include <iostream>
using namespace std;

/*  a) te deklarohen dy variabla me emrat x dhe y te cilat ruajne numra te plote dhe inicializohen me vlera permes tastieres, 
b) te llogaritet shuma e numrave prej x deri ne y supozojme se x <= y, 
c) gjate kalkulimit te shumes ne rast se numri aktual eshte i plotpjestueshem me 6, 
shumes ti zbritet gjysma e numrit aktual.
d) te shtypet rezultati i caktuar ne fund*/

int main() {

    int x, y, shuma = 0;

    cout << "Jepni vleren e X: ";
    cin >> x;

    cout << "Jepni vleren e Y: ";
    cin >> y;

    for (int i = x; i <= y; i++) {

        shuma += i;  

        if (i % 6 == 0) {
            shuma -= (i / 2);
        }
    }

    cout << "Shuma perfundimtare: " << shuma << endl;

    return 0;
}
