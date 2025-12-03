#include <iostream>
using namespace std;

void countDigits(int number, int &zeros, int &nonZeros, int &digits){
    zeros= 0;
    nonZeros=0;
    digits=0;
    int i=number;

    while(i > 0){
        int digits= i%10;

        if(digits==0){
            zeros++;
        }else{
            nonZeros++;
        }
            i = i/10;
    }

    digits= zeros + nonZeros;
}

int main(){

    int number=20250001;
    int zeros, nonZeros, digits;

    countDigits(number, zeros, nonZeros, digits);
    cout<<"The number of zeroes is:"<<zeros<<endl;
    cout<<"The number of non zeroes is:"<<nonZeros<<endl;
    cout<<"The number of digits is:"<<digits<<endl;

    return 0;
}