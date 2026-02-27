#include <iostream>
#include <string>
using namespace std;

class Telefoni{
    private:
        string prodhuesi;
        string ngjyra;
        float pesha;
        float niveli_baterise;

    public:
        Telefoni(){
        cout<<"Vendos emrin e pordhuesit:"<<endl;
        getline(cin,prodhuesi);
        cout<<"Vendos ngjyren:"<<endl;
        getline(cin,ngjyra);
        cout<<"Vendos peshen (ne gm):"<<endl;
        cin>>pesha;
        cout<<"Vendos nivelin e baterise(%):"<<endl;
        cin>>niveli_baterise;
}
    Telefoni(string p, string ngj, float pe, float nb){
        prodhuesi=p;
        ngjyra=ngj;
        pesha=pe;
        niveli_baterise=nb;
    }
    int numroShkronjat(char shkronja){
        int rez=0;
        for(int i=0; i<prodhuesi.length(); i++){
            if(prodhuesi[i]==shkronja){
                rez++;
            }
        }
        return rez;
    }
    string ktheMesin(string teksti){
        string rez="";
        if(teksti.length()%2==1){
            rez=teksti[teksti.length()/2];
        }
        else{
            rez=teksti[teksti.length()/2-1];
            rez+=teksti[teksti.length()/2];
        }
        return rez;
    }
    float konvertoNgaGramNeKg(){
        float rez=pesha/1000;
        return rez;
    }
    string ktheNivelinEbateriseNeVija(){
        string rez=" ";
        if(niveli_baterise==0){
            rez="Nuk keni bateri";
            return rez;
        }else if(niveli_baterise<10){
            rez="Mbusheni baterine";
        }else{
            for(int i=niveli_baterise; i>=10; i=i-10){
                rez+="|";
            }
        }
        return rez;
    }
    string merrNgjyren(){
        return ngjyra;
    };
    void vendosNgjyren(string ngj){
        ngjyra=ngj;
    };
    string merrProdhuesin(){
        return prodhuesi;
    }

};


int main(){

    Telefoni t1;

    cout<<"Pesha ne kilogram:"<<t1.konvertoNgaGramNeKg()<<endl;
    cout<<"Mesi i emrit te prodhuesit:"<<t1.ktheMesin(t1.merrProdhuesin())<<endl;
    cout<<"Mesi i ngjyres eshte:"<<t1.ktheMesin(t1.merrNgjyren())<<endl;
    cout<<"Niveli i baterise eshte:"<<t1.ktheNivelinEbateriseNeVija()<<endl;
    char shkronja;
    cout<<"Jepe nje shkronje per tu numeruar:";
    cin>>shkronja;
    cout<<"Numri i shkronjave: '"<<shkronja<<"'eshte:"
    <<t1.numroShkronjat(shkronja)<<endl;

    return 0;
}