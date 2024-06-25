#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int cantidadNumeros, maximo; 
	cout<<"Ingrese la cantidad de numero que desea generar: ";
	cin>>cantidadNumeros;
	cout<<"Ingrese la cantidad maxima de los numeros a generar: ";
	cin>>maximo;
	cout<<"Los "<<cantidadNumeros<<" numeros aleatorios generados entre 0 y "<<maximo<<" son: "<<endl;
	for(int i=1;i<=cantidadNumeros;i++){
		int aleatorio=rand() % maximo + 1;
		cout<<aleatorio<<endl;
		
	}
	
	return 0;
}