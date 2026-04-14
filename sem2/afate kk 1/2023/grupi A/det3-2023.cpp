/*
3. [7 pikë] Të shkruhet programi sipas kërkesave në vijim:
a. [1.5 pikë] Të definohet funksioni initVector, i cili pranon si parametër një pointer të tipit int dhe kthen si rezultat një vektor (STL) të tipit int.
b. [2.5 pikë] Funksioni i definuar në pikën a, ka për detyrë të krijojë një vektor, i cili mbushet me anëtarë nga tastiera për aq sa është vlera ku pointeri i funksionit.
c. [1 pikë] Brenda funksionit main, të thirret funksioni initVector me argumentet e nevojshme.
d. [2 pikë] Brenda funksionit main, të printohen anëtarët e vektorit të inicializuar.
*/

#include <iostream>
#include <vector>

std::vector<int> initVector(int* ptr) {
    std::vector<int> v;
    int n = *ptr;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    return v;
}

int main() {
    int size;
    std::cin >> size;

    std::vector<int> vec = initVector(&size);

    for (std::size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i + 1 < vec.size()) {
            std::cout << ' ';
        }
    }
    std::cout << '\n';

    return 0;
}