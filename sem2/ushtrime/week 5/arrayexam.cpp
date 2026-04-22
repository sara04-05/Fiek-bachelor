/*
Objektivi: Shkruaj nje program ne C++ qe perdor std::array
per te ruajtur dhjete numra te plote. 
Programi duhet te inicializoje std::array me vlera, 
te llogarise mesataren e ketyre vlerave dhe pastaj te numroje 
sa numra jane mbi mesatare. Printo mesataren dhe numrin e numrave 
qe jane mbi mesatare.
*/

#include <iostream>
#include <array>
using namespace std;

int main(){

     array<int, 10> arr = {10, 12, 25, 5, 1, 0, 2, 37, 73, 66};

     if(arr.empty() == true){
        cout<< "Your array is empty;"<< endl;
     };

     int s= 0; 

     for(int i = 0; i < arr.size(); i++){
        s += arr[i];
     }

     double mes=s/arr.size();
     int nrMbiMesatare = 0;
     for(int i=0; i<arr.size(); i++){
        if(mes<arr[i]){
            nrMbiMesatare++;
        }
     }
    

     cout<< "Mesatarja eshte:" << mes;
     cout<< "Numrat mbi mesatare jane:" << nrMbiMesatare;

    return 0;
}