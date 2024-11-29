#include <iostream>
using namespace std;

int main(){
    cout << "Calcularemos para usted x^y" << " por favor introduzca el valor de x: " << endl;
    double x;
    cin >> x; //para que lea la variable x

    cout << "Introduzca ahora por favor el valor de y (entero!): " << endl;
    double y;
    cin >> y; // para que lea la variable y

    if (y<0) {
        x=1/x;
        y=-y; // el objetivo es hacer a y positiva
    }

    double res = 1; // partimos desde x^0=1; por eso (1)

    while (y>0) { //y ya siendo y positiva, mientras lo sea
        res=res*x;
        y=y-1;
    }

    cout << "El resultado es " << res << " pulse una tecla y enter para salir" << endl;
    int esc;
    cin >> esc;
    if (esc==1){
        return 0;
    }
}


