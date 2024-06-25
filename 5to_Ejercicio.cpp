#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

void calcularRaices(double a, double b, double c, complex<double>& raiz1, complex<double>& raiz2, bool& sonReales) {
    
    double discriminante = b*b-4*a*c;
    
    if (discriminante>=0) {
        
        sonReales = true;
        if (discriminante>0){
            raiz1 = complex<double>((-b + sqrt(discriminante)) / (2 * a), 0);
            raiz2 = complex<double>((-b - sqrt(discriminante)) / (2 * a), 0);
        } else {
            raiz1 = raiz2 = complex<double>(-b / (2 * a), 0);
        }
    } else {
        sonReales = false;
        raiz1 = complex<double>(-b/(2 * a),sqrt(-discriminante)/(2 * a));
        raiz2 = complex<double>(-b/(2 * a),-sqrt(-discriminante)/(2 * a));
    }
}

int main() {
    double a, b, c;
    complex<double> raiz1, raiz2;
    bool sonReales;

    cout<<"Introduce el valor de a: ";
    cin>>a;
    cout<<"Introduce el valor de b: ";
    cin>>b;
    cout<<"Introduce el valor de c: ";
    cin>>c;

    if (a == 0) {
        cout << "El coeficiente 'a' no puede ser cero en una ecuación cuadratica." << endl;
    } else {
        
        calcularRaices(a, b, c, raiz1, raiz2, sonReales);
        
        if(sonReales){
            if(raiz1==raiz2){
                cout<<"Las raices son reales e iguales:"<<endl;
                cout<<"Raiz: "<<raiz1<<endl;
            }else{
                cout<<"Las raices son reales y diferentes:" << endl;
                cout<<"Raiz 1: "<<raiz1<<endl;
                cout<<"Raiz 2: "<<raiz2<<endl;
            }
        }else{
            cout<<"Las raíces son complejas y diferentes:"<<endl;
            cout<<"Raiz 1: "<<raiz1<<endl;
            cout<<"Raiz 2: "<<raiz2<<endl;
        }
    }

    return 0;
}
