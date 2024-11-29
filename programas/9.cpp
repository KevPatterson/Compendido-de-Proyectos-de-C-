#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[20];
	char letra[] = "A";
		
	cout<<"Digite tu nombre en mayuscula: ";
	cin>>nombre;
	
	if(nombre[0] == letra[0]){
		strlwr(nombre);
		cout<<nombre;
	}
	else cout<<"La inical del nombre no es la A: ";
	
	return 0;
} 
