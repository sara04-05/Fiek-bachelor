#include <iostream>
using namespace std;

int pi=3.14;
#define PI 3.14 //direktive// perdoret per te ruajtur konstante te ciles nuk mund ti a ndryshosh vleren

// void printo(const int &a){

//     cout<< "X brenda funksionit:" << a <<endl;

// }

void printo(int &a){

    a=5 * PI;
    cout<< "X brenda funksionit:" << a <<endl;

}

int main(){

    int x=10;

    printo(x);

    cout<< "X brenda main:" << x << endl;

    return 0;
}

