#include <iostream>
using namespace std;

int main(){

    int stina;

    cout<< "Jepeni Stinen (1-Pranvera , 2-Vera, 3- Vjeshta, 4-Dimri)"<<endl;
    cin>>stina;

      switch(stina){
        case 1:
        cout<<"Moti i fresket - Ka ligjerata \n";
        break;
        case 2:
        cout<<"Moti me vape - Ka provime \n";
        break;       
        case 3:
        cout<<"Moti me vrandesira - Ka ligjerata \n";
        break;
        case 4:
        cout<<"Moti me ngrica - Ka ligjerata dhe provime \n";
        break;
     default:
        cout<<"Nuk ka stine te tille \n";
        break;
    }


    return 0;
}