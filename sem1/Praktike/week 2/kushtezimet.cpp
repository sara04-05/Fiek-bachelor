#include <iostream>
using namespace std ;

int main(){
double temperatura;
cout << "Jepni temperaturen ne Celcius: " ;
cin >> temperatura ;

if(temperatura > 28){
    cout<<"Eshte dite me vape";

}else if(temperatura < 10){
cout<<"Eshte dite e ftohte";
}else if(temperatura >= 10 && temperatura <= 28){
cout<<"Eshte dite me temperature te kenaqshme";
}

return 0;
}