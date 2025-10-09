#include <iostream>
using namespace std;

int main(){
    float num1, num2, num3;
    cout << "Vendosni tre numrat:\n";
    cin >> num1 >> num2 >> num3;


    if(num1 > num2 && num1 > num3){
        cout<<"Numri me i madh eshte: "<<num1<<endl;
    }else if(num2 > num1 && num2 > num3){
        cout<<"Numri me i madh eshte: "<<num2<<endl;
    }else if(num3 > num1 && num3 > num2){
        cout<<"Numri me i madh eshte: "<<num3<<endl;

    }else{
        cout<<"Numrat jane te njejte"<<endl;
    }

    return 0;
}