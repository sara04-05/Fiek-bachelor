#include <iostream>
using namespace std;

struct PointStruct{
    int x;
    int y;

    void print(){
        cout << x<< " " << y<<endl;
    }
};

class PointClass{
    int x;
    int y;

    public:

        // PointClass(){
        //     cout<<"U krijua nje pike";
        // }

    PointClass(int _x, int _y){
            cout<<"U krijua nje pike me parametra";
            x = _x;
            y = _y;
        }

    void setX(int _x){
                cout << "U ndryshua X" <<endl;

        x = _x;
    }
    
    void setY(int _y){
        y = _y;
    }

    void print(){
        cout << x<< " " << y<<endl;
    }

    
};

int main(){
// PointStruct ps;
// ps.x =5;
// ps.y=67;
// ps.print();

// PointClass pc;
// pc.setX(7);
// pc.setY(75);

// pc.print();

PointClass p1;

PointClass p2(3, 5);

return 0;
}