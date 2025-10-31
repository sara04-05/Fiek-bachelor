#include <iostream>
using namespace std;

int main(){

    // int piket[4]={90, 80, 70, 88};

    // double piket[4]={90.5, ....};
    // char piket[4]={'A', 'B', '4', '%'};
    // string piket[4]={"asdsdf"};
    // piket[1]= (piket[2]+ piket[3]) / 2;
    // cout<<piket[1]<<endl;

    const int madhesia=4;
    int piket[madhesia]={90, 80, 70, 81};
    int shuma=0;

    for(int i=0; i<madhesia; i++){
        cout<<piket[i]<<" ";
        shuma += piket[i];
    }
    cout<<endl;
    cout<<"Shuma e pikeve eshte: "<<shuma<<endl;

    double mesatarja = (double)shuma/(madhesia+0.0); //Mjafton vetem njera me qene double//
    cout<<"Mesatarja e pikeve eshte: "<<mesatarja<<endl;
    return 0;
}