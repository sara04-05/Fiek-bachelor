#include <iostream>
using namespace std;

void shfaq_ndryshimin_maksimal(double uji[][6]);

int main(){

    int matrix[4][6];


    for(int i=0; i<4; i++){
        
        for(int j=0; j<6; j++){
            cout<<"Jepni konsumin per Katin 1:"<<endl;
            cin>>matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}

void shfaq_ndryshimin_maksimal(double uji[][6]){
        int matrix[4][6];

        int ndryshimimi_max=matrix[0][0];

    for(int i=0; i<4;i++){
        for(int j=0; j<6;j++){
            if(matrix[i][j]<ndryshimimi_max++){
                cout<<"Ndryshimi maksimal eshte:"<<ndryshimimi_max
            }
        }
    }

 }

