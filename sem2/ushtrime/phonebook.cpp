#include <iostream>
using namespace std;

class contact{
    public:
    string name;
    string number;

    contact();
    contact(string n, string num){
        name = n;
        number = num;
    }

    void print(){
      cout<< "Emri:" << name << " - " << "Numri:" << number <<endl;
    }
};

class phonebook{
    string name;
    contact *contacts;

 public:
    phonebook(string name, int capacity){
        this ->name = name;
        this ->contacts = new contact[capacity];
    }
};

int main(){

    int phonebook_capacity;

    cout<<"Vendos kapacitetin e phonebook-ut:" <<endl;
    cin>>phonebook_capacity;
    
    phonebook pb("School", phonebook_capacity);
// "    phonebook *pbHeap = new phonebook("School", phonebook_capacity);

return 0;
}