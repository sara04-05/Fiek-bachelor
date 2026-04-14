/*
DETYRA 1: Nxënësi
🔹 Kërkesat:
Klasa: Nxenesi
Atributet:
id (private)
notaMesatare (private)
emri (public)
klasa (public)
Konstruktor pa parametra
Konstruktor me parametra (të gjitha atributet)
Getter/setter për private
2 instanca:
një me konstruktor pa parametra
një me konstruktor me parametra
Printo emrin e nxënësit
*/

// #include <iostream>
// #include <string>

// using namespace std;

// class Nxenesi
// {
// private:
//     int id;
//     int notaMesatare;

// public:
//     string emri;
//     int klasa;

    
// Nxenesi() {
//     id = 0;
//     notaMesatare = 0;
//     emri = " ";
//     klasa = 0;
// }

// Nxenesi(int _id, int _notaMesatare, int _klasa, string _emri  ) {
//     id = _id;
//     notaMesatare = _notaMesatare;
//     klasa = _klasa;
//     emri = _emri;

// }

// int getid(){
// return id;
// }

// void setid(int _id){
//     id = _id;
// }

// int getnotaMesatare(){
//     return notaMesatare;
// }

// void setnotaMesatare(int _notaMesatare){
//     notaMesatare = _notaMesatare;
// }
// };

// int main(){

// Nxenesi nxenesi1;
// nxenesi1.setid(1);
// nxenesi1.setnotaMesatare(4);
// nxenesi1.emri = "Sara";
// nxenesi1.klasa = 11;

// Nxenesi nxenesi2(2, 5, 12, "Zara");

//  cout<< "Nxenesi i pare eshte:" << nxenesi1.emri <<endl;
//  cout<< "Nxenesi i dyte eshte:" << nxenesi2.emri <<endl;


// return 0;
// }

/*
DETYRA 2: Punëtori
🔹 Kërkesat:
Klasa: Puntori
Atributet:
id (private)
rroga (private)
emri (public)
pozita (public)
Konstruktor pa parametra
Konstruktor me parametra
Getter/setter për id dhe rroga
2 instanca
Printo emrin dhe pozitën
*/

#include <iostream>
#include <string>

using namespace std;


class Punetori{

    private:
    int id;
    double rroga;

    public:
    string emri;
    string pozita;

    Punetori(){
        id = 0;
        rroga = 0;
        emri = " ";
        pozita = " ";
    }

    Punetori(int _id, double _rroga, string _emri, string _pozita)
    {
        id = _id;
        rroga = _rroga;
        emri = _emri;
        pozita = _pozita;
    }

    int getId(){
        return id;
    }

    void setId(int _id){
        id = _id;
    }
    
    int getRroga(){
        return rroga;
    }

    void setRroga(int _rroga){
        rroga = _rroga;
    }
};

int main(){

    Punetori Punetori1;
    Punetori1.setId(1);
    Punetori1.setRroga(1500);
    Punetori1.emri = " Loli"; 
    Punetori1.pozita = "Software engineer";

    Punetori Punetori2(2,1500, "Sara", "Software Engineer");

    cout << "Emri i punetorit te pare eshte" << Punetori1.emri << "Dhe pozita e punes eshte: " << Punetori1.pozita <<endl;
    cout << "Emri i punetorit te dyte eshte" << Punetori2.emri << "Dhe pozita e punes eshte: " << Punetori2.pozita;
    return 0;

}