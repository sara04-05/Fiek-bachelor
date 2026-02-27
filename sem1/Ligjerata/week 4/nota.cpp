#include <iostream>
using namespace std;

int main(){
    double l, u, k1, k2;
    double p;
    cout << "Jepni piket e ligjeratave: ";
    cin >> l;
    cout << "Jepni piket e ushtrimeve : ";
    cin >> u;
    cout << "Jepni piket e kollokviumit 1: ";
    cin >> k1;
    cout << "Jepni piket e kollokviumit 2: ";
    cin >> k2;
    p=l+u+k1+k2;

    if(p<50){
        cout << "Nota juaj eshte: 5" << endl;
    }else if(p<60){
        cout << "Nota juaj eshte: 6" << endl;
    }else if(p<70){
        cout << "Nota juaj eshte: 7" << endl;
    }else if(p<80){
        cout << "Nota juaj eshte: 8" << endl;
    }else if(p<90){
        cout << "Nota juaj eshte: 9" << endl;
    }else{
        cout << "Nota juaj eshte: 10" << endl;
    }
    return 0;
}