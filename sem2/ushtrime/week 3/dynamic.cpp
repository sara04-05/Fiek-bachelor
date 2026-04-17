#include <iostream>
using namespace std;

void test(){
  int *ptr_1 = nullptr;
    
    ptr_1 = new int;

}

int main(){

    int *ptr_1 = nullptr;
    
    ptr_1 = new int;
     


    cout<< "Vlera ku pointon ptr_1 eshte: " << *ptr_1 << endl;

    test();
    test();
    test();

    delete ptr_1;

    int n;

    cout<< "Vendosni numrin e madhesis suaj N:" <<endl;
    cin>> n ;

    int array[4] = {1,2,3,4};

    cout << "Vargu eshte:" << array <<endl;
    // cout << "Adresa e antarit te pare eshte:" << &array[0] <<endl;

    cout << "Antari i pare eshte " << array[0] <<endl;
    // cout << "Antari i pare eshte " << *(array + 0 ) <<endl;

   int *array2 = new int[n];

   array2[0] = 10;
   *(array2+0)= 11;
   *(array2)= 11; // dy te fundit jane te njejta perdoren kur duhet me iu qas vargut me pointera
    
   for(int i=0; i< n; i++){
    cout << array2[i] <<endl;
    cout<< *(array2 + i) <<endl;
   }


    return 0;
}
