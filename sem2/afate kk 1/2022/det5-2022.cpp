/*
#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> queue;
    queue.push(5);
    queue.push(9);
    queue.push(3);
    queue.push(14);
    queue.push(6);

    for(int i=0, i <queue.size(); i++){
        cout << queue.top() << " ";
        queue.pop();
    }
  return 0;
}

a. Cilet nga funksionet e struktures se rreshtit me prioritet jane perdorur ne kodin e paraqitur,
b. Sa eshte kompleksiteti kohor per shtimin e nje vlere brenda rreshtit,
c. Cka do te printohet ne ekran pas ekyekutimit te kodit te paraqitur,
d. Te shkruhet nje funksion i cili printon elementet e nje rreshti me prioritet, 
duke perdorur funksionin empty qe ofron struktura priority_queue
*/

/*Shumë mirë si pyetje. Ja përgjigjet për secilën pikë:

a) Funksionet e priority_queue të përdorura në kod

push(...) për shtim elementesh
top() për të marrë elementin me prioritetin më të lartë (më i madhi te priority_queue<int> default)
pop() për ta hequr elementin në krye
size() për numrin e elementeve
b) Kompleksiteti kohor i shtimit të një vlere

push ka kompleksitet O(log n).
c) Çka printohet në ekran

Siç është shkruar aktualisht, cikli for(int i=0, i <queue.size(); i++) ka gabim sintaksor (duhet ; jo ,), prandaj kodi nuk kompilohet.
Nëse e korrigjon në for(int i=0; i<queue.size(); i++), atëherë për shkak se size() zvogëlohet pas çdo pop(), do të printohen vetëm 3 elemente:
14 9 6
Nëse qëllimi është të printohen të gjithë, duhet përdorur while(!queue.empty()).
*/ 
//d) Funksion që printon elementet duke përdorur empty()

#include <iostream>
#include <queue>
using namespace std;
void printPriorityQueue(priority_queue<int> q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
//E kam kaluar parametrin q me vlerë (kopje), që rreshti origjinal të mos ndryshohet.
//Nëse e kalon me referencë, pas printimit ai do të zbrazet.