/*
3. [8 pikë] Të shkruhet programi sipas kërkesave në vijim:
a. [2 pikë] Të definohet funksioni stackEdges, i cili pranon si parametër një strukturë stack me numra të plotë dhe një numër të plotë si referencë, kurse tip kthyes është numër i plotë.
b. [3 pikë] Funksioni i definuar në pikën a, ka për detyrë që përmes komandës return të kthejë anëtarin e fundit në stack, kurse përmes parametrin referent anëtarin e parë në stack.
c. [2 pikë] Brenda funksionit main, të thirret funksioni stackEdges me argumentet e nevojshme.
d. [1 pikë] Brenda funksionit main, të printohen vlerat që kthen si rezultat funksioni stackEdges.
*/

#include <iostream>
using namespace std;

struct Stack {
    int v[10];
    int top;
};

int stackEdges(Stack &s, int &pari) {
    pari = s.v[0];
    return s.v[s.top];
}

int main() {
    Stack s;
    s.v[0] = 10;
    s.v[1] = 20;
    s.v[2] = 30;
    s.top = 2;

    int pari;
    int fundit = stackEdges(s, pari);

    cout << fundit << endl;
    cout << pari << endl;

    return 0;
}