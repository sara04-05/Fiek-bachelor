//5. [4 pikë] Është dhënë programi në vijim:

#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    int size = 5;
    int sSize = s.size();
    for (int i = 0; i < size; i++)
    {
        s.push(sSize);
    }
    cout << s.top() << endl;
    if (size > 3) {
        s.pop();
    }
    cout << s.top() << endl;
    return 0;
}
/*
a. [1 pikë] Cilët nga funksionet e strukturës stack janë përdorur në kodin e paraqitur?
b. [1 pikë] Cili janë anëtarët brenda strukturës stack, pas përfundimit të unazës for?
c. [1 pikë] Cila do të jetë dalja në fund të programit?
d. [1 pikë] Cili funksion i strukturës stack na tregon nëse stack është i zbrazët dhe çfarë tip kthyes ka ai funksion?
*/

/*
a. Funksionet e stack që përdoren
Në kod përdoren:

push – shton element në majë të stack-ut
size – numëron elementet (s.size() për sSize)
top – lexon elementin në majë
pop – heq elementin nga maja (pa e kthyer vlerën)
b. Anëtarët pas unazës for
Para unazës: sSize = s.size() → stack është bosh, pra sSize == 0.
Në unazë: s.push(sSize) ekzekutohet 5 herë, pra shtohet gjithmonë 0.
Pas përfundimit të unazës, stack-u përmban 5 elemente, të gjitha me vlerë 0 (nga poshtë lart: 0, 0, 0, 0, 0; në majë është i fundit i shtuar).

c. Dalja në fund të programit
Pas unazës, s.top() është 0 → printon 0 dhe newline.
size > 3 është e vërtetë → s.pop() heq një element nga maja; maja mbetet prapë 0.
s.top() përsëri është 0 → printon 0 dhe newline.
Pra dalja është:

0
0

d. Funksioni “a është bosh stack-u?” dhe tipi i kthimit
Funksioni është empty() (p.sh. s.empty()).
Tipi i kthimit: bool — true nëse stack-u është bosh, false nëse nuk është.
(Ky funksion nuk përdoret në kodin e dhënë, por është përgjigja standarde për pyetjen.)
*/