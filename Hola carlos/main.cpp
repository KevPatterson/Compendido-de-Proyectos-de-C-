#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
//#include <stdlib.h>


using namespace std;

int main()
{
    srand(time(0));
    cout << "Hola adivina que numero del 1-1000 estoy pensando: " ;
    int random = rand()%1000+1;
    int inte;
    int mega = 0;
    while (inte!=random)    {
        cin >> inte;
    if (inte < 0 and inte > 1000){
        cout << "Reuerde: Escribe un numero entero del 1-1000: ";
        cin >> inte;
    }
    else if ( inte > random) {
        cout << "El numero es demasiado grande" << endl;
    }
    else  {
        cout << "El numero es demasiado pequeno" << endl;
    }
    mega = ++mega;
    }
    cout << "Respuesta correcta. Demoraste " << mega << "intentos" << endl << "F E L I C I D A D E S" << endl;


   system("pause");

    return 0;
}
