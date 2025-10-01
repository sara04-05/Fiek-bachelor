#include <iostream>
#include <math.h>
using namespace std;

int main(){
float pesha;
short int gjatesia; 
float bmi;

cout << "Shkruaj peshen: ";
cin >> pesha;
cout << "Shkruaj gjatesine: ";
cin >> gjatesia;
bmi = pesha/ /*pow(gjatesia,2)*/ (gjatesia*gjatesia) ;
cout << "BMI eshte: " << bmi<<endl;
return 0;
}