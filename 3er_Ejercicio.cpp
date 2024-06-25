#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double cateto1, cateto2, hipotenusa;
	cout<<"Ingrese uno de los catetos: ";
	cin>>cateto1;
	cout<<"Ingrese el otro cateto: ";
	cin>>cateto2;
	hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
	cout<<"La hipotenusa es: "<<hipotenusa<<endl;
	return 0;
}