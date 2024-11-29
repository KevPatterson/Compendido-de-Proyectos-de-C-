#include<iostream>

using namespace std;

int main(){
    int numeros[100][100],filas,columnas;
    int matriz2[100][100];
    
    cout<<"digite el numero de filas: ";
    cin>>filas;
    cout<<"digite el numeros de columnas: ";
    cin>>columnas;
    
    for(int i=0;i<filas;i++){
    	for(int j=0;j<columnas;j++){
    		cout<<"digite un numero para la matriz principal["<<i<<"]["<<j<<"] ";
    		cin>>numeros[i][j];
		}
		
	}
	      for(int i=0;i<filas;i++){
	      	for(int j=0;j<columnas;j++){
	      		matriz2[i][j] = numeros[i][j];
			  }
		  }
		  
		  cout<<"La nueva matriz es: "<<endl;
    for(int i=0;i<filas;i++){
    	for(int j=0;j<columnas;j++){
    		cout<<matriz2[i][j];
		}
    	cout<<"\n";
	}



   return 0;
}
