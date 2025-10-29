#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const int n=7;
  float qmimet[n], shuma;
  float mbi_mesatare=0;
  float mesatarja;

    for (int i=0; i<n; i++) {
    cout << "Jepe \x87mimin p\x89r produktin "<< i+1 << ": ";
    cin >> qmimet[i];
    cout<<"Prova 1\n";
}
 shuma=0;
    for (int i=0; i<n-1; i++) {
    shuma=shuma+qmimet[i];
        cout<<"Prova 2\n";

    }

    mesatarja=shuma/n;
    mbi_mesatare=0;

    for (int i=0; i<n-1; i++) {
    if(qmimet[i]>mesatarja){
        mbi_mesatare++;
            cout<<"Prova 3\n";

    }
    }

    cout<<"Mesatarja"<<mesatarja<<endl
    <<"Numri i vlerave mbi mesataren eshte:"<<mbi_mesatare<<endl;


    return 0;
}