/*
5. (6 pikë) Analiza e kodit dhe Kompleksiteti:
a. (1 pikë) Sa herë ekzekutohet trupi i ciklit while në processStack?
b. (2 pikë) Cilat vlera printohen nga funksioni processStack?
c. (2 pikë) Cili është kompleksiteti kohor (Big O) i funksionit processStack?
d. (1 pikë) Sa anëtarë mbesin në stack pas thirrjes së processStack?
*/

#include <iostream>
#include <stack>

using namespace std;

void processStack(stack<int>& s) {
    while (!s.empty()) {
        cout << (s.top() % 3) << " ";
        s.pop();
    }
}

int main() {
    stack<int> s;
    for (int i = 1; i <= 5; ++i) {
        s.push(i * 3);
    }
    processStack(s);
    return 0;
}

