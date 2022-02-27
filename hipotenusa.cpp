#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int hipotenusa(){
	
	float a,b;
	cout<<"Ingrese el lado adyacente del triangulo: ";cin>>a;
	cout<<"Ingrese el lado opuesto del triangulo: ";cin>>b;

	cout<<setprecision(3)<<sqrt(a*a+b*b);
		
}		
