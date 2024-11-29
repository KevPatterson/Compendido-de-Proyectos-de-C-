#include <iostream>

using namespace std;

int main()
{
    cout << "Escriba las concentraciones de A -> B: " << endl;
    double A, B;
    cin >> A >> B;
    double inequil = B/A;
    cout << "Escriba el equilibrio de la reaccion: " << endl;
    double equil;
    cin >> equil;
    if (inequil==equil){
        cout << "Las concentraciones ya estan en equilibrio"  << endl;
        return 0;
    }
    else if (inequil < equil){
        double ajustador = (((equil*A)-B)/(equil));
        B = B + ajustador;
        A = A - ajustador;
    }
    else {
        double ajustador = ((B-(equil*A))/(equil));
        B = B - ajustador;
        A = A + ajustador;
    }
    cout << "Las concentraciones alcanzan el equilibrio para: " << endl;
    cout << A << "M " << "de A" << endl;
    cout << B << "M " << "de B" << endl;

    }







