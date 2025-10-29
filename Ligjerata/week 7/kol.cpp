#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, nje;
    float numri, max;

    cout<<"Sa numra mendoni te i jepni? :";
    cin>>n;

    max=-pow(2,31);
    nje=0;
    for(int i=1; i<=n; i++){
        cout<<"Jepni numrin "<<i+1<<": ";
        cin>>numri;

        if(numri>max){
            max=numri;
        }
        else if(numri>-10 && numri<10){
            nje++;
        }
    }
    cout<<"Maksimalja eshte:"<<max<<endl;
    cout<<"Numri i vlerave njeshifrore eshte:"<<nje<<endl;
    


    return 0;
}