/*
Të shkruhet programi sipas kërkesave në vijim:
a.
[1 pikë] Të deklarohen tri variabla p, q dhe r, të cilat mund të ruajnë numra të plotë.
b.
[1 pikë] Vlerat e variablave p dhe q të lexohen nga tastiera.
c.
[1 pikë] Vlera e variablës r të jetë shuma e variablave p dhe q, e shumëzuar me 3.
d.
[1 pikë] Të shtypet prodhimi i variablës r me shumën e p dhe q.
e.
[1 pikë] Cila do të jetë dalja e programit për vlerat p = 2 dhe q = 3?
*/
#include <iostream>
using namespace std;

int main() {
	// a
	int p, q, r;

    // b
	cout << "Shenoni vleren per variablen p: ";
	cin >> p;
	cout << "Shenoni vleren per variablen q: ";
	cin >> q;

    // c
	r = (p + q) * 3;

    // d
	int result = r * (p + q);
	cout << "Rezultati: " << result << endl;

	return 0;
}