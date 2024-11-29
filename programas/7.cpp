#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra[20];
	char rev[30],x;
	
	cout<<"Digite una palabra: ";
	cin>>palabra;
	
	strcpy(rev,palabra);
	
    if(strcmp(palabra,strrev(rev)) == 0){
    	cout<<"Es una palabra polindroma: ";
	}
  else cout<<"La palabra "<<palabra<<" no es polindroma. ";
	
        getch();
	return 0;
} 
