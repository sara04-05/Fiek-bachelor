#include <iostream>
using namespace std;

int main(){
    int a=4, b=-1, c=10;
    bool rez1, rez2, rez3;
    
    rez1=(a>=b) && (c==a*b); //false

    b++; b++; b++; b+4;
    rez2=(a+b+c)<=20; //true

    c--;c=5;
    rez3=rez3+c;  //true

    cout << "Rez1 :" << rez1 << endl
    << "Rez1 :" <<  rez2 << endl
    << "Rez1 :" << rez3 << endl;

    return 0;
}