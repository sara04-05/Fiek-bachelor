#include <iostream>
#include <string>

using namespace std;

string ktheDyShkronjaNeSkaje(string teksti);
int kthePozitenEHapesires(string emri_mbiemri);
string ktheInicialet(string emri_mbiemri);
bool eshtePalindrom(string tekst);

int main(){
    
   string teksti;
   cout<<"Jepe emrin dhe mbiemrin: ";
   getline(cin,teksti);
   cout<<"Simbolet skajore jane: "<<ktheDyShkronjaNeSkaje(teksti)<<endl;
   cout<<"Pozita e hapesires eshte: "<<kthePozitenEHapesires(teksti)+1<<endl;
   cout<<"Inicialet jane: :"<<ktheInicialet(teksti)<<endl;
    if(eshtePalindrom(teksti)){
        cout<<"Teksti eshte palindrom\n";
    }else{
       cout<<"Teksti nuk eshte palindrom\n";

    }
    return 0;
}



string ktheDyShkronjaNeSkaje(string teksti){
    string rezultati=" ";
    rezultati +=teksti[0];
    rezultati +=" ";
    rezultati+=teksti[teksti.length()-1];

    return rezultati;
}

int kthePozitenEHapesires(string emri_mbiemri){
    int rezultati=-1;
    for(int i=0; i<emri_mbiemri.length(); i++){
        if(emri_mbiemri.at(i)==' '){
            rezultati=i;
            break;
        }
    }
    return rezultati;
}

string ktheInicialet(string emri_mbiemri){

    string inicialet=" ";
    inicialet +=emri_mbiemri[0];
    inicialet+='.';

    int hapesira=kthePozitenEHapesires(emri_mbiemri);
    inicialet+=emri_mbiemri[hapesira+1];
    
    inicialet+='.';

    return inicialet;
}

bool eshtePalindrom(string tekst){
    bool rez=true;
    for(int i=0; i<tekst.length()/2; i++){
        if(tekst[i]!=tekst[tekst.length()-i-1]){
            rez=false;
            break;
        }
    }
    return rez;
}

