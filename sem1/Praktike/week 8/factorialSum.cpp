#include <iostream>
using namespace std;

long faktorieli(int n){
   long f=1;
   for(int i=1; i<=n; i++){
    f=f*i;
   };
   return f;
}

int main(){
    int n=4;
    long shuma=0;

    for(int i=0; i<=n; i++){
        shuma = shuma+ faktorieli(i);
    }

    cout<<faktorieli(10);
    return 0;
}