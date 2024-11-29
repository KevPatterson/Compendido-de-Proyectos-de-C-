#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[20];
	char cad2[20];	
	
	cout<<"Digite una cad1: ";
	cin>>cad1;
	cout<<"Digite una cad2: ";
	cin>>cad2;
	
	cout<<"\n";	
	strupr(cad1);
	strupr(cad2);
	
	cout<<"Pasando las letras minusculas a mayusculas: "<<endl;
	cout<<cad1<<endl;
	cout<<cad2<<endl;
	
	cout<<"\n";
	if(strcmp(cad1,cad2) == 0){
		cout<<"cad1 es igual a cad2: ";
	}
	else { 
	     cout<<"No son iguales las cadenas: "<<endl;
		if(strcmp(cad1,cad2) > 0){
			cout<<"cad1 es mayor que cad2: "<<endl;
		}
	else cout<<"cad2 es mayor que cad1: ";		
	}
	
	return 0;
} 
