#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand(time(0));
    bool bot1 = true;

    while (bot1==true){

    cout << "Esciba el numero de codones que necesita transcribir a ARNm: ";
    int codones;
    cin >> codones;
    char A;
    char B;
    char C;

    cout << "Copie la cadena (A;T;G;C) 3' -> 5' del ADN que decea transcribir a ARNm:" << endl << "3'";
    for (int Cam=1 ; Cam<=codones ;++Cam){
        cin >> A;
            if (A=='A'){
                A='U';             }
            else if (A=='T'){
                A='A';            }
            else if (A=='G'){
                A='C';            }
            else A='G';

        cin >> B;
            if (B=='A'){
                B='U';             }
            else if (B=='T'){
                B='A';             }
            else if (B=='G'){
                B='C';             }
            else B='G';
        cin >> C;
            if (C=='A'){
                C='U';             }
            else if (C=='T'){
                C='A';             }
            else if (C=='G'){
                C='C';              }
            else C='G';

        if (Cam==codones and Cam==1){
            cout << endl <<"El ARNm transcrito tiene la secuencia: "<< endl << "5' " <<A << B << C << " 3'";
            ;
        }

        else if (Cam==codones and Cam!=1){
            cout << A << B << C << " 3'";

            }
        else if (Cam==1) {
            cout << endl <<"El ARNm transcrito tiene la secuencia: "<< endl << "5' " << A << B << C << "-";
        }
        else  cout << A << B << C << "-";
     }
    cout << endl << endl << "Decea copiar otra cadena de ADN si/no: ";
    string salida;
    cin >> salida;
    while (salida!="no" and salida!="si"){
        cout << "Responda si o no: Decea copiar otra cadena de ADN: ";
        cin >> salida;
    }
    if (salida=="no"){
        bot1=false;
}

    }

}



