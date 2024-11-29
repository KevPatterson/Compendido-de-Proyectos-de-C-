#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[100];
	int longitud=0;
	
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(palabra,20,'\n');
	
	longitud = strlen(palabra);
	
	cout<<longitud<<endl;
	if(longitud > 10){
		cout<<palabra;
	}
	else cout<<"No se puede mostrar: ";
	
	getch();
	return 0;
} 
