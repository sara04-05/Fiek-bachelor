/*
Te shkruhet kodi sipas kerkesave ne vijim:
a. Te deklarohet nje vektor(STL), anetaret e te cilit duhet te jene numra jo te plote.
b. Te lexohen 5 vlera nga tastiera, te cilet duhet te shtohen ne vektorin e deklaruar,
c. Te gjendet anetari me vleren me te madhe brenda vektorit,
d. Te printohen te gjithe anetaret e vektorit te deklaruar
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> v;

    cout << "Shkruani 5 numra jo te plote:" << endl;
    for (int i = 0; i < 5; ++i) {
        double x;
        cout << "Vlera " << i + 1 << ": ";
        cin >> x;
        v.push_back(x);
    }

    double maksimumi = *max_element(v.begin(), v.end());

    cout << "\nAnetari me vleren me te madhe eshte: " << maksimumi << endl;

    cout << "Te gjithe anetaret e vektorit jane:" << endl;
    for (double nr : v) {
        cout << nr << " ";
    }
    cout << endl;

    return 0;
}
