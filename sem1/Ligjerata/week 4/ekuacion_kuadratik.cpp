#include <iostream>
#include <math.h>
using namespace std;

int main(){
  float a, b, c, x1, x2;
    cout << "Jepni vlerat e a, b dhe c: ";
    cin >> a >> b >> c;
    float dallori=b*b-4*a*c;
    // if(dallori>0){
    //     x1=(-b+sqrt(dallori))/(2*a);
    //     x2=(-b-sqrt(dallori))/(2*a);
    //     cout << "Vlera per x1 eshte: " << x1 << endl;
    //     cout << "Vlera per x2 eshte: " << x2 << endl;
    // }
    // else{
    //     cout << "Funksioni nuk ka zgjidhje reale." << endl;
    // }
     if(a==0){
        int x=-c/b;
        cout << "Vlera per x eshte: " << x << endl;
     }
     else{
        if(dallori>0){
        x1=(-b+sqrt(dallori))/(2*a);
        x2=(-b-sqrt(dallori))/(2*a);
        cout << "Vlera per x1 eshte: " << x1 << endl;
        cout << "Vlera per x2 eshte: " << x2 << endl;
    }
    else if(dallori==0){
        x1=(-b)/(2*a);
        cout << "Funksioni ka nje zgjidhje reale: " << x1 << endl;
    }
    else{
        cout << "Funksioni nuk ka zgjidhje reale." << endl;
    }

     }
    
return 0;
}