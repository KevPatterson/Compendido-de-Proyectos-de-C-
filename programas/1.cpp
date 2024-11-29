#include<iostream>

using namespace std;

int main(){
	
	int numeros[100][100],filas,columnas;
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columna: ";
	cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
		cout<<numeros[0][0]<<endl;
		cout<<numeros[1][1]<<endl;
		cout<<numeros[2][2]<<endl		;
	
		
	
	
	
	
	
	return 0;
}
