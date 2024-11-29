#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "Hola que tal ";
	char cad2[30];
	char nombre[100];

	cout<<" ¿Como te llamas?: ";
	cin>>nombre;
	
	strcpy(cad2,cad1);
	
	strcat(cad2,nombre);
	
	cout<<cad2<<endl;
	

	getch();
	return 0;
} 
