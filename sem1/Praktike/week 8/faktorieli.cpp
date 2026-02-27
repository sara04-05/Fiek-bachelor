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

    cout<<faktorieli(10);

    return 0;
}