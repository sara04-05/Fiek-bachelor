#include <iostream>
using namespace std;

int kubi(int k){
return k * k * k;
//return pow(k,3);
}

double mbledh(double a, double b, double c){

    return a + b + c;
};

void mbledhdhePrinto(double a, double b, double c){
    cout<< a + b + c;
};

string  hello(){
    cout<<"Hello Grupi 4b"<<endl;
};


int main(){
    int o=3;
    int n=8;
    int l=12;

    cout<<kubi(o)<<endl;
    cout<<kubi(n)<<endl;
    cout<<kubi(l);

    mbledhdhePrinto(4,5,6);

    hello();

    return 0;
}

/*
int kubi(int nr){
int k = nr *  nr * nr

return k;
}

int main(){

int rez kubi(3);
cout<<rez;
return 0;
}
*/