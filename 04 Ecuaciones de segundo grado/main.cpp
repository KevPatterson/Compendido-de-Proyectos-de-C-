#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(0));
    bool continua = true;

    while (continua) {
        cout << "Hola. Resolveremos para usted una ecuacion de la forma ax^2+bx+c" << endl;
    cout << "introduzca por favor los valores de a , b y c" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    double discriminante = b*b-4*a*c;
    if (discriminante > 0) { // tiene dos resultados
        cout << "Los resultados reales son: " << (-b+sqrt(discriminante))/(2*a) << "," << (-b-sqrt(discriminante))/(2*a) << endl;
    }
    else if (discriminante = 0){ // tiene un resultado
        cout << "Existe un solo resultado real (doble) " << -b/(2*a) << endl;
    }
    else { //no tiene una solucone en los reales
        cout << "No tiene solucion en los reales" << endl;
    }
    cout << "Decea continuar (si / no)" << endl;
    string esc;
    cin >> esc;
    while (esc!= "si" and esc!="no"){
        cout << "Decea continuar" << endl;
        cin >> esc;
    }
    if (esc=="no"){
        continua=false;
    }

    }

}
