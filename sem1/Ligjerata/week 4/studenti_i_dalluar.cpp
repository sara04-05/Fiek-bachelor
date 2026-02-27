#include <iostream>
using namespace std;

int main(){
   float num1, num2, num3;
   float mesatarja;
    cout << "Jepne noten e pare: ";
   cin >> num1;
   cout << "Jepne noten e dyte: ";
   cin >> num2;
   cout << "Jepne noten e trete: ";
   cin >> num3;

   // mesatarja = (num1 + num2 + num3) / 3;
   // if(mesatarja >= 9.0){
   //    cout <<"Urime keni fituar cmimin student i dalluar! /n"; 
   // }else{
   //    cout <<"Nuk keni fituar cmimin student i dalluar! /n";
   // }
+
   (mesatarja >= 9.0)?( cout <<"Urime keni fituar cmimin student i dalluar! /n"): (cout <<"Nuk keni fituar cmimin student i dalluar! /n");
   return 0;

}