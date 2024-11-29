#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Como te llasmas?" << endl ;
    string tunombre ;
    cin >> tunombre ;

    cout << "Ok " << tunombre << " en que ano naciste?" << endl ;
    int naci ;
    cin >> naci ;
    cout << "Tu edad es entonces " << 2017 - naci << "anos" << endl ;
    cout << "presione 1 para salir " << endl ;
    int rar;
    cin >> rar;
    if (rar == 1) {
       
	   system("pause");
	      return 0;}
}
