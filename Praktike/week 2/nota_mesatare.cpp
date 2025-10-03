#include <iostream>
using namespace std;
 
int main(){

int piket;

cout << "Vendosni piket:";
cin >> piket;

// if (piket >=90){
//     cout << "Nota juaj eshte 10";
// }else if(piket >=80){
//     cout << "Nota juaj eshte 9";
// }else if(piket >=75){
//     cout << "Nota juaj eshte 8";
// }else if(piket >=60){
//     cout << "Nota juaj eshte 7";
// }else if(piket >=50){
//     cout << "Nota juaj eshte 6";
// }else if (piket <50){
//     cout << "Nota juaj eshte 5";
// }else{
//     cout << "Piket jane dhene gabim";
// }

if(piket<50)
{
    cout << "Nuk keni kaluar";
}else if(piket<60){ 
    cout << "Nota juaj eshte 6" <<endl;
}else if(piket<70){ 
    cout << "Nota juaj eshte 7" <<endl;
}else if(piket<80){ 
    cout << "Nota juaj eshte 8" <<endl;
}else if(piket<90){ 
    cout << "Nota juaj eshte 9" <<endl;
}else if(piket<=100){ 
    cout << "Nota juaj eshte 10" <<endl;
}else{
    cout << "Piket jane dhene gabim" <<endl;
}

return 0;
}
