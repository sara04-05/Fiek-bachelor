#include <iostream>
using namespace std;

double arraySum(int V[], double n){
int shuma=0;
for(int i=0; i<n ; i++){
    shuma = shuma + V[i];
}
return shuma/n;
}

int main(){

int A[]={10, 20, 30};
cout<<"Mesatarja eshte:"<<
arraySum(A, 3)<<endl;

    return 0;
}