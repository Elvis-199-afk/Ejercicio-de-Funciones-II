#include<iostream>
#include<cmath>
#include<complex>
using namespace std;

int main(){
	double a,b,c,r1,r2,discriminante,raiz;
	cout<<"Ingrese los valores de a, b, c de una ecuacion cuadratica"<<endl;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;		
	cout<<"Ingrese el valor de c: ";
	cin>>c;
	
	discriminante = b * b - 4 * a * c;
	
	if(discriminante>0){
		r1=(-b+sqrt(discriminante))/(2*a);
		r1=(-b-sqrt(discriminante))/(2*a);
		cout<<"Las raices son "<<r1<<" y "<<r2<<endl;
	}else if(discriminante==0){
			raiz=-b/(2*a);
			cout<<"La ecuacion tiene una sola raiz, que es: "<<raiz<<endl;		
		}else{
			complex<double> r1=complex<double>(-b, sqrt(-discriminante))/(2.0 * a);
	        complex<double> r2=complex<double>(-b, -sqrt(-discriminante))/(2.0 * a);
	        cout << "Las raices son complejas, que son: "<<r1<<" y "<<r2<<endl;
		}
	
	
	return 0;
}