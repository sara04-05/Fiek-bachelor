/*
Te implementohet programi sipas kerkesave te listuara duke perdorur strukturen stack:
a. Te deklarohet nje stack, anetaret e te cilit mund te ruajne nga nje fjale te vetme (string),
b, Ne stack-un e deklaruar ne piken a te shtohen vlerat e nebojshme ashtuqe kur printojme,
te gjithe anetaret qe gjenden brenda tij te shfaqet fjalia "Sot eshte kollokviumi i pare"
c, Te printohet gjatesia e stack-ut te deklaruar pasi jane shtuar elementet e nevojshme,
per realizimin e pikes b,
d, Te printohen te gjithe anetaret qe gjendjen ne stack

*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    // a) Deklarimi i stack-ut qe ruan fjale (string)
    stack<string> fjaleStack;

    // b) Shtimi i fjaleve ne menyre qe printimi nga lart-poshte
    // te jape fjaline: "Sot eshte kollokviumi i pare"
    fjaleStack.push("pare");
    fjaleStack.push("i");
    fjaleStack.push("kollokviumi");
    fjaleStack.push("eshte");
    fjaleStack.push("Sot");

    // c) Printimi i gjatesise se stack-ut
    cout << "Gjatesia e stack-ut: " << fjaleStack.size() << endl;

    // d) Printimi i te gjithe anetareve ne stack
    cout << "Anetaret ne stack (nga top ne fund): ";
    while (!fjaleStack.empty()) {
        cout << fjaleStack.top();
        fjaleStack.pop();
        if (!fjaleStack.empty()) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
