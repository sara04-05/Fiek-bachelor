/*
Objektivi: Shkruaj nje program ne C++ qe perdor nje std::vector per te ruajtur disa
numra te plote te futur nga perdoruesi (perdoruesi mund te tregoje fundin e 
inputit duke futur nje numer specifik, p.sh., -1). Pastaj, implemento nje funksion 
per te gjetur numrin me te vogel ne vektor.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec; 
    
    while(true){

        cout<<"Futni nje numer (-1 per te perfunduar)";

        int n;
        cin >> n;

        if(n == -1){
            break;
        }

        vec.push_back(n);
    }

    int min = vec.at(0);

    for(int i=1; i<vec.size(); i++){
        if(vec.at(i) < min){
            min = vec.at(i);
        }
    }

    cout<< " Numri me i vogel eshte:" << min <<endl;

    return 0;
}