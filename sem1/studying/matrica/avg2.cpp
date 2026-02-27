/*
Përdor një matricë 4x4 dhe llogarit mesataren e elementeve të saj. 
*/

#include <iostream>
using namespace std;

int main(){

    int matrix[4][4]={
        {1, 2, 3, -1},
        {2, -2, 3, -3},
        {-5, 2, 7, 1},
        {0, 2, 3, 5}
    };

    int sum= 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum += matrix[i][j];
        cout<<"Elementet e matrices jane:"<< matrix[i][j] <<endl;
        }
        cout<<endl;
    }

    int elem_num= 4*4;
    double avg;

    avg=sum/(double)elem_num;

    cout<<"Mesatarja e numrave te matrices eshte:" << avg<<endl;

    return 0;
}