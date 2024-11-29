#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    int xlim = 11;
    int ylim = 10;
    char releno = 'O';

    for (int iy = 1; iy <= ylim ; ++iy){
        for (int ix = 1 ; iy <= xlim ; ++ix){
            if (ix == 3 or ix == 6 or ix == 9){
                cout << " ";
            }
            else if (ix==1 or ix==2){
                if (iy <= a){
                    cout << releno;
                }
                else cout << " ";
            }
            else if (ix==4 or ix==5){
                if (iy <= b){
                    cout << releno;
                }
                else cout << " ";
            }
            else if (ix==7 or ix==8){
                if (iy <= c){
                    cout << releno;
                }
                else cout << " ";
            }
            else if (ix==10 or ix==11){
                if (iy <= d){
                    cout << releno;
                }
                else cout << " ";
            }
            else {
                return 0;
            }
        }
    }




    }

