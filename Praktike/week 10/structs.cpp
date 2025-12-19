#include <iostream>
using namespace std;

struct student{
    string emri;
    string mbiemri;
    string id;

    void printo(){
   cout<<"Emri:" <<emri <<endl;
    cout<<"Mbiemri"<<mbiemri <<endl;
    cout<<"Id"<<id <<endl;

}
};


int main(){

    student s1{"Nora", "Kryeziu", "1234567890"};

    s1.printo();

    student s2{"Sara", "Simnica", "1234567898"};

    s2.printo();

 
    // string emri1="Sara";
    // string mbiemri1="Simnica";
    // string id1="2345678o6789";

    // string emri2="Loli";
    // string mbiemri2="Moli";
    // string id2="123456789";

    return 0;
}