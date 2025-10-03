#include <iostream>
using namespace std;

int main(){

    int  num1;
    int  num2;

    cout << "Jepni numrin e pare: ";
    cin >> num1;

    cout << "Jepni numrin e dyte: ";
    cin >> num2;
    
    if(num1 > num2){
        cout << num1<< " Eshte me i madh se " << num2 << endl;
    }else if(num1 < num2){
        cout << num2<< " Eshte me i madh se " << num1 << endl;
    }else{
        cout << "Te dy numrat jane te barabarte" << endl;
    }





 return 0;   
}