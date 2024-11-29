# include <iostream >
using namespace std ;

int main () {
double xmin =-1, xmax =1;
double ymin =-1, ymax =1;
int xres =40, yres =20;
char c='X';
for (int iy =0; iy <yres ;++ iy) {
for (int ix =0; ix < xres ;++ ix) {
double x = ix;
double y = iy;
if (y>x*x*x) cout << " "; else cout << c;
}
cout << endl;
}
}
