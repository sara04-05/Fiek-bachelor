/*
Te shkruhet programi sipas kerkesave ne vijim:
a. Te definohet funksioni faktorieli, i cili kalkulon faktorielin e nje numri
te pranuar si parameter,
b. Funksioni i definuar ne piken a te ktheje rezultatin per numrin e dhene 
permes nje parametri referent,
c. Brenda funksionit main te thirret funksioni faktorieli me parametrat e nevojshem.
d. Brenda funksionit main te printohet rezultati per faktorielin e kalkuluar
*/
#include <iostream>
using namespace std;

// Funksioni e llogarit faktorielin dhe rezultatin
// e kthen përmes parametrit referencë.
void faktorieli(int n, int& rezultat) {
    rezultat = 1;

    for (int i = 1; i <= n; i++) {
        rezultat *= i;
    }
}

int main() {
    int numri;
    int fakt = 0;

    cout << "Jep numrin: ";
    cin >> numri;

    faktorieli(numri, fakt);

    cout << "Faktorieli i " << numri << " eshte: " << fakt <<endl;

    return 0;
}

