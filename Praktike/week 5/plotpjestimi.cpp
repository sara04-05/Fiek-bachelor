#include <iostream>
using namespace std;


int main(){
    int n;
    bool eshte_Nr_i_Thjeshte = true;
    cout<<"Vendosni n:";
    cin>>n;

    for(int i=2; i<=n / 2; i++){
        if(n % i == 0){
            cout<<"Nuk eshte numer i thjeshte: "<<endl;
            eshte_Nr_i_Thjeshte = false;
            break;
        }
    }
    if(eshte_Nr_i_Thjeshte){
        cout<<"Eshte numer i thjeshte"<<endl;
    }else{
        cout<<"Nuk eshte numer i thjeshte"<<endl;
    }

    return 0;

}

