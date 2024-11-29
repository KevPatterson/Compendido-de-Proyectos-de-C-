#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad1[20],cad2[20];
	int n1;
	float suma = 0,n2;
	
	cout<<"Digite una cadena de caracteres de numeros entero: ";
	cin>>cad1;
	cout<<"Digite otra cadena pero de caracteres de numeros reales: ";
	cin>>cad2;
	
	n1 = atoi(cad1);
	n2 = atof(cad2);
	suma = n1 + n2;
	
	cout<<"\nLos respectivos valores de los caracteres: "<<endl;
	cout<<n1<<endl;
	cout<<n2<<endl;
	
	cout<<"\nLa suma de los repectivos valores es "<<suma<<endl;
	
	getch();
	return 0;
}
