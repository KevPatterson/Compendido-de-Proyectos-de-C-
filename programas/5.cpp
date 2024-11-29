#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[100],palabra1[100];
	
	cout<<"Digite una primera cadena de caracteres: ";
	cin>>palabra;
	cout<<"Digite otro segunda cadena: ";
	cin>>palabra1;
	
	if(strcmp(palabra,palabra1) == 0){
		cout<<"Ambas son iguales: ";
	}
	else if(strcmp(palabra,palabra1) > 0){
		cout<<"Primera cadena es mayor: ";
	}
    else cout<<"Segunda cadena es mayor: ";
    
    
	getch();
	return 0;
} 
