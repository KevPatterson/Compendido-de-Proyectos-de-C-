#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
    srand (time(0));
    bool continuar = true;
    while (continuar) {
    cout << "Escriba dos numeros x y y respectivamente tal que x < y para hallar los numeros primos entre x y y" << endl;
    int minimo;
    int maximo;
    cin >> minimo;
    cin >> maximo;
    while (maximo <= minimo) {
        cout << "RECUERDE: y debe ser mayor que x. Vuelva a escribir los valores de x y y" << endl;
        cin >> minimo;
        cin >> maximo;     }
    cout << "Los numeros primos entre " << minimo << " y " << maximo << " son:" << endl;
    for (int i=minimo;i<=maximo;++i){
        int div = 2;
        bool primo=true;
        while (div*div<=i and primo==true){
    if (i%div==0) primo=false;
    else div=div+1;
    }
    if (primo==true and i!=1) cout << i << "; " ;
    }
    cout << endl << "Decea contiuar si o no" << endl;
    string x;
    cin >> x;
    while (x!="si" and x!="no") {
        cout << "Decea continuar si o no" << endl;
        cin >> x;
    }
     if (x=="no") continuar= NULL;
    }
}

