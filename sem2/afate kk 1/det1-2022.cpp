// Te definohet klasa Libri sipas pikave ne vijim:
//a. Klasa te kete anetaret: id(privat), emri(publik), autori(publik), numri i faqeve(privat),
// b. Klasa te kete te definuar nje konstruktor pa parametra
// c. Klasa te kete te definuar nje konstruktor me parametra permes se cilit inicializohen te gjithe anetaret e klases
// d. Per anetaret privat te klases te definohen funksione per lexim dhe percaktim te vleres
// e. Te krijohet nje instance e klases Libri permes konstruktorit pa parametra, 
//kurse vlerat per anetaret e saj te percaktohen permes instances se krijuar
//Te krijohet nje isntace e klases Libri permes konstruktorit pa parametra
//Te printohet emri i librit ne te dyja instancat

#include <iostream>
#include <string>

using namespace std;

class Libri {
private:
    int id;
    int numriFaqeve;

public:
    string emri;
    string autori;

    // Konstruktor pa parametra
    Libri() {
        id = 0;
        emri = "";
        autori = "";
        numriFaqeve = 0;
    }

    // Konstruktor me parametra
    Libri(int _id, string _emri, string _autori, int _numriFaqeve) {
        id = _id;
        emri = _emri;
        autori = _autori;
        numriFaqeve = _numriFaqeve;
    }

    // Getter dhe setter per id
    int getId() {
        return id;
    }

    void setId(int _id) {
        id = _id;
    }

    // Getter dhe setter per numrin e faqeve
    int getNumriFaqeve() {
        return numriFaqeve;
    }

    void setNumriFaqeve(int _numriFaqeve) {
        numriFaqeve = _numriFaqeve;
    }
};

int main() {
    // Instance 1 me konstruktor pa parametra
    Libri libri1;
    libri1.setId(1);
    libri1.emri = "Princi i Vogel";
    libri1.autori = "Antoine de Saint-Exupery";
    libri1.setNumriFaqeve(120);

    // Instance 2 me konstruktor me parametra
    Libri libri2(2, "Gjenerali i Ushtrise se Vdekur", "Ismail Kadare", 260);

    // Printimi i emrit te librit ne te dy instancat
    cout << "Emri i librit 1: " << libri1.emri << endl;
    cout << "Emri i librit 2: " << libri2.emri << endl;

    return 0;
}

/*
**Shpjegim i plotë dhe i detajuar i kodit sipas pikave a, b, c, d dhe e**


### a. Klasa të ketë anëtarët: id (privat), emri (publik), autori (publik), numri i faqeve (privat)

**Çfarë kërkohet:**  
Brenda klasës `Libri` duhet të ketë 4 variabla (anëtarë):
- `id` → privat (vetëm brenda klasës mund të lexohet/ndryshohet)
- `emri` → publik (mund të lexohet/ndryshohet direkt nga jashtë)
- `autori` → publik (po ashtu)
- `numriFaqeve` → privat (si id)

**Si është shkruar në kod:**

```cpp
class Libri {
private:
    int id;
    int numriFaqeve;

public:
    string emri;
    string autori;
    ...
};
```

**Si funksionon:**  
- `private:` – çdo gjë poshtë tij është e mbrojtur. Jashtë klasës nuk mund të shkruash `libri1.id = 5;` (do të japë gabim).  
- `public:` – çdo gjë poshtë tij është e lirë. Mund të shkruash direkt `libri1.emri = "Princi i Vogel";` (siç bëhet në main).

Kjo është **enkapsulim** (një nga parimet bazë të OOP): të dhënat sensitive (id dhe numri i faqeve) i mbrojmë, të tjerat i lëmë publike.

### b. Klasa të ketë të definuar një konstruktor pa parametra

**Çfarë kërkohet:**  
Një konstruktor që nuk merr asnjë parametër. Kur krijojmë një objekt me `Libri libri1;`, ai duhet të ekzekutohet automatikisht dhe të vendosë vlera fillestare.

**Si është shkruar në kod:**

```cpp
// Konstruktor pa parametra
Libri() {
    id = 0;
    emri = "";
    autori = "";
    numriFaqeve = 0;
}
```

**Si funksionon:**  
Kur shkruan `Libri libri1;`, C++ automatikisht thërret këtë konstruktor.  
Rezultati: të 4 anëtarët marrin vlera fillestare (0 ose string bosh).  
Kështu objekti nuk mbetet me vlera “të çuditshme” nga kujtesa.

### c. Klasa të ketë të definuar një konstruktor me parametra përmes së cilit inicializohen të gjithë anëtarët e klases

**Çfarë kërkohet:**  
Një konstruktor që merr 4 parametra dhe menjëherë i vendos në të 4 anëtarët.

**Si është shkruar në kod:**

```cpp
// Konstruktor me parametra
Libri(int _id, string _emri, string _autori, int _numriFaqeve) {
    id = _id;
    emri = _emri;
    autori = _autori;
    numriFaqeve = _numriFaqeve;
}
```

**Si funksionon:**  
Kur shkruan `Libri libri2(2, "Gjenerali i Ushtrise se Vdekur", "Ismail Kadare", 260);`, konstruktorit i kalohen vlerat dhe ato vendosen direkt te anëtarët.  
Shënim: `_id`, `_emri` etj. janë thjesht emra të ndryshëm për parametrat (për të mos u përziej me emrat e anëtarëve).

Kjo na lejon të krijojmë një libër “të plotë” në një rresht.

### d. Për anëtarët privat të klases të definohen funksione për lexim dhe përcaktim të vlerës (getters & setters)

**Çfarë kërkohet:**  
Për `id` dhe `numriFaqeve` (sepse janë private) duhet të kemi funksione që:
- lexojnë vlerën (getter)
- ndryshojnë vlerën (setter)

**Si është shkruar në kod:**

```cpp
// Getter dhe setter per id
int getId() {
    return id;
}

void setId(int _id) {
    id = _id;
}

// Getter dhe setter per numrin e faqeve
int getNumriFaqeve() {
    return numriFaqeve;
}

void setNumriFaqeve(int _numriFaqeve) {
    numriFaqeve = _numriFaqeve;
}
```

**Si funksionon:**  
- `setId(1)` → ndryshon vlerën private `id`  
- `getId()` → kthen vlerën private `id` (nëse do ta lexosh)  
E njëjta gjë për numrin e faqeve.  
Kështu ruajmë kontrollin mbi të dhënat private, por prapë mund t’i përdorim nga jashtë klasës.

### e. Të krijohet një instance e klases Libri përmes konstruktorit pa parametra, kurse vlerat për anëtarët e saj të përcaktohen përmes instances së krijuar.  
Të krijohet një instance e klases Libri përmes konstruktorit me parametra.  
Të printohet emri i librit në të dyja instancat.

**Çfarë kërkohet:**  
1. Krijo një objekt me konstruktorin pa parametra → pastaj cakto vlerat me `set` dhe me emrat publikë.  
2. Krijo një objekt tjetër me konstruktorin me parametra.  
3. Printo emrin e librit për të dy objektet.

**Si është shkruar në kod (pjesa e main):**

```cpp
int main() {
    // Instance 1 me konstruktor pa parametra
    Libri libri1;                          // ← thërret konstruktorin pa parametra
    libri1.setId(1);
    libri1.emri = "Princi i Vogel";        // direkt sepse është public
    libri1.autori = "Antoine de Saint-Exupery";
    libri1.setNumriFaqeve(120);

    // Instance 2 me konstruktor me parametra
    Libri libri2(2, "Gjenerali i Ushtrise se Vdekur", "Ismail Kadare", 260);

    // Printimi i emrit te librit ne te dy instancat
    cout << "Emri i librit 1: " << libri1.emri << endl;
    cout << "Emri i librit 2: " << libri2.emri << endl;

    return 0;
}
```

**Si funksionon gjithë kjo pjesë:**

- `libri1` krijohet bosh (konstruktori pa parametra) → pastaj i japim vlera me `setId`, `setNumriFaqeve` dhe drejtpërdrejt `emri` & `autori` (sepse janë public).
- `libri2` krijohet menjëherë me të gjitha vlerat (konstruktori me parametra).
- Në fund printojmë vetëm `emri` nga të dy objektet.

**Outputi që del kur e ekzekuton programin:**

```
Emri i librit 1: Princi i Vogel
Emri i librit 2: Gjenerali i Ushtrise se Vdekur
```


*/
