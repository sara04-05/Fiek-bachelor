//5. [4 pikë] Është dhënë programi në vijim:

#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int sSize = 7;
    for (int i = 0; i < sSize; i++)
    {
        q.push(q.empty() ? sSize : q.front() - i);
    }
    cout << q.front() << endl;
    while (q.size() > q.front()) {
        q.pop();
    }
    cout << q.size() << endl;
    return 0;
}

/*
a. [1 pikë] Cili është anëtari brenda rreshtit, pas përfundimit të unazës for?
b. [1 pikë] Cila do të ishte radhitja e anëtarëve të rreshtit, nëse do të ishte me prioritet?
c. [1 pikë] Cila do të jetë dalja në fund të programit?
d. [1 pikë] Sa herë do të ekzekutohet unaza while?
*/

/*
Gjurmimi i for
i = 0: rreshti është bosh → shtohet 7 → [7]
i = 1..6: front() mbetet gjithmonë 7 (elementi i parë) → shtohet 7 - i
Pas 7 iteracive, rreshti nga para në fund është: 7, 6, 5, 4, 3, 2, 1.

a. Anëtari në krye pas for
q.front() është 7.

b. Radhitja nëse do të ishte me prioritet
Në C++, std::priority_queue<int> (pa krahasues të veçantë) është max-heap: prioriteti më i lartë është vlera më e madhe. Nëse pyetja nënkupton rendin kur nxirren elementët sipas prioritetit (një nga një me pop), rendi është nga më i madhi te më i vogli:

7, 6, 5, 4, 3, 2, 1

(Nëse do të ishte min-heap me greater<int>, rendi i nxjerrjes do të ishte 1, 2, …, 7 — por “priority queue” e zakonshme në stilin e std::priority_queue është max-heap.)

c. Dalja në fund të programit
cout << q.front() → rreshti i parë: 7
while (q.size() > q.front()): 7 > 7 është false, pra trupi i unazës nuk ekzekutohet.
cout << q.size() → 7
Pra dalja është dy rreshta:

7
7
d. Sa herë ekzekutohet while?
0 herë, sepse që në fillim q.size() == 7 dhe q.front() == 7, kështu që kushti q.size() > q.front() është i gabuar.
*/