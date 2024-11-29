#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	int promedio;
}alum1,alum2,alum3;

int main(){
	
    cout<<"Nombre del alumno 1: ";
    cin.getline(alum1.nombre,20,'\n');
    cout<<"Edad del alumno 1: ";
    cin>>alum1.edad;
    cout<<"Promedio del alumno 1: ";
    cin>>alum1.promedio;
    
    
    cout<<"\nNombre del alumno 2: ";
    cin.getline(alum2.nombre,20,'\n');
    cout<<"Edad del alumno 2: ";
    cin>>alum2.edad;
    cout<<"Promedio del alumno 2: ";
    cin>>alum2.promedio;
    
    fflush(stdin);
    cout<<"\nNombre del alumno 3: ";
    cin.getline(alum3.nombre,20,'\n');
    cout<<"Edad del alumno 3: ";
    cin>>alum3.edad;
    cout<<"Promedio del alumno 3: ";
    cin>>alum3.promedio;
    
    cout<<"\n";
    if((alum1.promedio > alum2.promedio) && (alum1.promedio > alum2.promedio)){
    	cout<<alum1.nombre<<" tiene el mejor promedio: ";
	}
    else if((alum2.promedio > alum1.promedio) && (alum2.promedio > alum3.promedio)){
    	cout<<alum2.nombre<<" tiene el mejor promedio. ";
	}
    else cout<<alum3.nombre<<" tiene mejor promedio: ";
    
	getch();
	return 0;
}
