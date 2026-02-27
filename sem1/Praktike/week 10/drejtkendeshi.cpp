#include <iostream>
using namespace std;

struct fusha{
    int gjatesia;
    int gjeresia;

    void siperfaqja(){
    cout<<"Siperfaqja eshte:"<<gjatesia*gjeresia<<endl;     
    };

    void perimetri(){
    cout<<"Perimetri eshte:"<<2*(gjatesia*gjeresia)<<endl; 
    };

};


int main(){
    
    fusha f1={15,10};
    f1.siperfaqja();
    
    return 0;
}