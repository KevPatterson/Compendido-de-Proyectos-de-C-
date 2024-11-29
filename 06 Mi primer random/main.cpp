#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    bool continua = true;

    while (continua){
        int x=rand()%3+1;
    if (x==1){
        cout << "Dario" << endl;
    }
    else if (x==2) {
        cout << "Lazaro" << endl;
    }
    else cout << "Julia" << endl;
    cout << "otra vez (si o no)" << endl;
    string out;
    cin >> out;
    while (out !="si" and out !="no" and out !="Si" and out != "SI" and out != "No" and out != "NO"){
        cout << "QUIERES SEGUIR (Si o No)" << endl;
        cin >> out;
    }
    if (out=="no" or out=="No" or out=="NO") {
        continua=false;
    }
    }

}
