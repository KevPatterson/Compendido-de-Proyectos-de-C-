#include <cstdlib>
#include <iostream>
using namespace std;
void leermatriz (float m[3][3])
{
 int i,j;
 for (i=1;i<=3;i++)
 {
 for (j=1;j<=3;j++)
 {
 cout<<"introducir el elemento "<<i<<","<<j<<endl;
 cin>>m[i][j];
 }
 }
 }
void producto_matrices (float a [3][3],float b[3][3],float p[3][3])
{
 int i,j,k;
 for (i=1;i<=3;i++)
 {
 p[i][j]=0;
 for (j=1;j<=3;j++)
 {
 p[i][j]=p[i][j]+a[i][k]*b[k][j];
 }
 }
 }


