#include <iostream>
using namespace std;

int count=1;
int n;

int shuma=0;
int prodhimi=1;

int main(){
    //  while(count<=10){
    //  cout<< count <<endl;
    //  count++;
    // }

    // cout<<"Vendosni vleren e n:"<<endl;
    // cin>>n;

    //  while(count<n){
    //  cout<< count <<endl;
    //  shuma+= count;
    //  count++;
    // }


    cout<<"Vendosni vleren e n:";
    cin>>n;

     while(count<=n){
     cout<< count <<endl;
     prodhimi*= count;
     count++;

    }

    // cout<<"Shuma e numrave prej 0 deri ne" <<n<< "eshte:"<< shuma<<endl;
    cout <<"Prodhimi i numrave prej eshte:"<<prodhimi<<endl;

    return 0;
}