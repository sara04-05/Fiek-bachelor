/*
6. [8 pikë] Të shkruhet kodi sipas kërkesave në vijim:
a. [1 pikë] Të deklarohet një rresht (queue), i cili si anëtarë mund të ketë numra të plotë.
b. [2 pikë] Brenda rreshtit të krijuar në pikën a, të shtohen 6 numra çift me radhë përmes një unaze, duke filluar nga numri 2.
c. [1 pikë] Të gjendet elementi minimal brenda rreshtit.
d. [1 pikë] Të largohet një element nga queue.
e. [1 pikë] Cilat janë numrat që do të mbesin në queue pas largimit të bërë në pikën d?
f. [2 pikë] Të shkruhet kodi i cili printon të gjitha elementet brenda rreshtit.
*/

/*
 * Detyra 6 - Rresht (queue) për fillestarë në C++
 *
 * Queue = "radhë": shtohet në fund, hiqet nga fillimi (FIFO).
 * push(x)  - shton x në fund
 * front()  - lexon kush është në fillim (pa e hequr)
 * pop()    - heq elementin nga fillimi
 * empty()  - true nëse është bosh
 */

#include <iostream>
#include <queue>

// Ndihmës: printon të gjithë elementet (marrim kopje që rreshti origjinal të mos prishet)
void printoTeGjitha(std::queue<int> kopje) {
    while (!kopje.empty()) {
        std::cout << kopje.front() << " ";
        kopje.pop();
    }
    std::cout << "\n";
}

int main() {
    // a) Rreshti me numra të plotë
    std::queue<int> rreshti;

    // b) 6 numra çift me radhë: 2, 4, 6, 8, 10, 12
    int numri = 2;
    for (int i = 0; i < 6; i++) {
        rreshti.push(numri);
        numri = numri + 2; // numri tjetër çift
    }

    // c) Minimali - kalojmë përmes një kopje të rreshtit
    int minimal = rreshti.front(); // fillojmë nga i pari
    std::queue<int> kopjePërMin = rreshti;
    while (!kopjePërMin.empty()) {
        if (kopjePërMin.front() < minimal) {
            minimal = kopjePërMin.front();
        }
        kopjePërMin.pop();
    }
    std::cout << "c) Minimali: " << minimal << "\n";

    // d) Hiq një element (nga fillimi i radhës = numri 2)
    rreshti.pop();

    // e) Çfarë mbetet: 4, 6, 8, 10, 12
    std::cout << "e) Pas nje largimi (FIFO): ";
    printoTeGjitha(rreshti);

    // f) Të gjithë elementet në rresht
    std::cout << "f) Elementet ne rresht: ";
    printoTeGjitha(rreshti);

    return 0;
}
