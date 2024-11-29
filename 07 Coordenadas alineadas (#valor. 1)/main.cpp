#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    srand(time(0));
    bool continuar = true;

    while (continuar==true){
    cout << "Escriba por favor las coordenadas (x;y) de los puntos A y B separados por un punto y coma( Por ejemplo 4 ; 2): " << endl;
    cout << "A: ";
    int Ax;
    int Ay;
    string Apc;
    cin >> Ax >> Apc >> Ay;
    while (Apc != ";"){
        cout << "RECUERDE: Debe separarlo por un punto y como (Por ejemplo 6 ; 2)" << endl;
        cin >> Ax >> Apc >> Ay;
    }
    cout << "B: ";
    int Bx;
    int By;
    string Bpc;
    cin >> Bx >> Bpc >> By;
    while (Bpc != ";"){
        cout << "RECUERDE: Debe separarlo por un punto y como (Por ejemplo 6 ; 2)" << endl;
        cin >> Bx >> Bpc >> By;
    }
    cout << "C: ";
    int Cx;
    int Cy;
    string Cpc;
    cin >> Cx >> Cpc >> Cy;
    while (Cpc != ";"){
        cout << "RECUERDE: Debe separarlo por un punto y como (Por ejemplo 8 ; 9)" << endl;
        cin >> Cx >> Cpc >> Cy;
    }
    cout << "Las coordenadas son: A(" << Ax << ";" <<  Ay << ") y B(" << Bx << ";" << By << ") y C(" << Cx << ";" << Cy << ")" << endl;
    cout << "Pulse n para continuar y o para volver a poner coordenadas: " ;
    string c;
    cin >> c;
    while (c != "n" and c != "o") {
         cout << "Pulse c para continuar" ;
         cin >> c;
    }
    if (c=="n"){
        int AB = (Ay-By)/(Ax-Bx); //Pendiente de la recta entre los puntos A y B
        int BC = (By-Cy)/(Bx-Cx);   // Pendiente de la recta entre A y B
        if (AB==BC){
            cout << "Los puntos son alineados" << endl;
            bool continuar = false;
        }
        else { cout << "Los puntos no son alineados" << endl;
            bool continuar = false;
        }
    cout << "Quiere continuar si/no: " ;
    string res;
    cin >> res;
    while (res!="si" and res!= "no"){
        cout << "Quiere continuar si/no: " ;
        cin >> res;
    }
    if (res=="no"){
        return 0;
    }

    }
    }
}
