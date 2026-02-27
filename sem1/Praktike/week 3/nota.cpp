#include <iostream>
using namespace std;

int main(){

    int nota;
    cout<<"Vendosni noten e juaj:";
    cin>>nota;

    switch(nota){
        case 5:
            cout<<"Nota 10-shkallore: 5"<<endl
            <<"Nota ECTS:F"<<endl;
            break;
        case 6:
            cout<<"Nota 10-shkallore: 6"<<endl
            <<"Nota ECTS:E"<<endl;
            break;
        case 7:
             cout<<"Nota 10-shkallore: 7"<<endl
            <<"Nota ECTS:D"<<endl;
            break;
        case 8:
             cout<<"Nota 10-shkallore: 8"<<endl
            <<"Nota ECTS:C"<<endl;
            break;
        case 9:
             cout<<"Nota 10-shkallore: 9"<<endl
            <<"Nota ECTS:B"<<endl;
            break;
        case 10:
             cout<<"Nota 10-shkallore: 10"<<endl
            <<"Nota ECTS:A"<<endl;
            break;
        default:
            cout<<"Nota e pavlefshme"<<endl;
            return 0;
    }

  string status = (nota >= 6 && nota <= 10) ? "Ju keni kaluar" :
                (nota < 6) ? "Ju keni deshtuar" : "";
    cout<<status<<endl;
    return 0;
}
