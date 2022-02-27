#include <iostream>
#include <math.h>

using namespace std;

int funcion(){
	float x,y,result = 0;
	
	cout<<"Ingrese el valor de x: ";cin>>x;
	cout<<"Ingrese el valor de y: ";cin>>y;
	
	result=(sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl reultado de la funcion es: "<<result<<endl;
	
}			 
