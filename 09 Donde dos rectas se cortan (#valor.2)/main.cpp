#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    bool continuar = true;

    while (continuar) {
    cout << "Escriba por favor las coordendas de dos puntos (x ; y) de dos funciones lineales para determinar en que punto se cortan" << endl;
    int Ax; int Ay; int Bx; int By; int Cx; int Cy; int Dx; int Dy;
    string pc;
    cout << "Para el segmento AB:" << endl << "A: " ;
    cin >> Ax >> pc >> Ay;
    while (pc!=";"){
        cout << "RECUERDE: Debe colocar los puntos de la forma (x ; y)" << endl;
        cout << "A: ";
        cin >> Ax >> pc >> Ay;
    }
    cout << "B: " ;
    cin >> Bx >> pc >> By;
    while (pc!=";"){
        cout << "RECUERDE: Debe colocar los puntos de la forma (x ; y)" << endl  ;
        cout << "B: " ;
        cin >> Bx >> pc >> By;
    }
    cout << "Para el segmento CD:" << endl;
    cout << "C: " ;
    cin >> Cx >> pc >> Cy;
    while (pc!=";"){
        cout << "RECUERDE: Debe colocar los puntos de la forma (x ; y)" << endl << "C: ";
        cin >> Cx >> pc >> Cy;
    }
    cout << "D: " ;
    cin >> Dx >> pc >> Dy;
    while (pc!=";"){
        cout << "RECUERDE: Debe colocar los puntos de la forma (x ; y)" << endl << "D: ";
        cin >> Dx >> pc >> Dy;
    }
    cout << "Para los segmentos: AB(" << Ax << ";" << Ay << ")(" << Bx << ";" << By << ")" << " y CD(" << Cx << ";" << Cy << ")(" << Dx << ";" << Dy << ")" << endl;
    double pendAB = (Ay-By)/(Ax-Bx);
    double pendCD = (Cy-Dy)/(Cx-Dx);
    double movyAB = Ay-(Ax*pendAB) ;
    double movyCD = Cy-(Cx*pendCD) ;
    if (movyAB==movyCD and pendAB==pendCD){
            if (pendAB==0) {
                cout << "Los puntos A, B , C  y D perenecen a la misma funcion: f(x)=" << movyAB << endl;
            }
            else if (pendAB==0 and movyAB==0){
                cout << "puntos A, B , C  y D perenecen a la misma funcion: f(x)=0" << endl;
            }
            else if (movyAB == 0){
                cout << "puntos A, B , C  y D perenecen a la misma funcion: f(x)=" << pendAB << "x" << endl;
            }
            else {
                 cout << "Los puntos A, B , C  y D perenecen a la misma funcion: f(x)=" << pendAB << "x+" << movyAB << endl;
            }
            cout << "Decea continuar si/no: " ;
              string sal;
              cin >> sal;
              while (sal!="si" and sal!="no"){
                cout << "Decea continuar si/no: " ;
                cin >> sal;
            }
            if (sal=="no"){
                return 0 ;
            }
    }
    else if ( movyAB!=movyCD and pendAB==pendCD ){
              cout << "Las funciones no se cortan" << endl;
              cout << "Decea continuar si/no: " ;
              string sal;
              cin >> sal;
              while (sal!="si" and sal!="no"){
                cout << "Decea continuar si/no: " ;
                cin >> sal;
            }
            if (sal=="no"){
                return 0;
            }
    }
    else {
         cout << "AB con funcion: " << "f(x)=" << pendAB << "x+" << movyAB << endl;
        cout << "CD con funcion: " << "g(x)=" << pendCD << "x+" << movyCD << endl;
        cout << "Las funciones se cortan en el punto P(" << (movyCD-movyAB)/(pendAB-pendCD) << ";" << (pendAB*((movyCD-movyAB)/(pendAB-pendCD)))+movyAB << ")" << endl;
    }
    cout << "Decea continuar si/no: " ;
    string sal;
    cin >> sal;
        while (sal!="si" and sal!="no"){
            cout << "Decea continuar si/no: " ;
            cin >> sal;
        }
    if (sal=="no"){
        return 0;
    }
    }

}
