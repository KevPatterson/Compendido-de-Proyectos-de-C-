#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const double cambio = 24 ;
int main()
{
    srand(time(0));
    bool continua = true;

    while (continua){
         cout << "Introduce la cantidad en dolares: " ;
    double dolares ;
    cin >> dolares ;
    double pesos = dolares * cambio ;
    cout << dolares << " equivale a " << pesos << " pesos" << endl ;
    cout << "Quiere contiuar (si/no)" << endl;
    string a;
    cin >> a;
    while (a != "si" and a != "no"){
        cout << "Quiere continuar (si/no)" << endl;
        cin >> a;
    }
    if (a=="no"){
        continua = false;
    }
    }

}
