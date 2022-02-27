#include <iostream>

using namespace std;

void operaciones(){
	
	double x1,x2, suma=0, resta=0, multiplicacion=0,division=0;
	
	cout<<"Ingrese un numero: "; cin>>x1;
	cout<<"Ingrese otro numero: "; cin>>x2;


	suma=x1+x2;
	resta=x1-x2;
	multiplicacion=x1*x2;
	division=x1/x2;
	

	cout<<"----------------------------------------";
	cout<<"\nLa suma de los numeros ingresados es: " <<suma<<endl;
	cout<<"La resta de los numeros ingresados es: " <<resta<<endl;
	cout<<"La multiplicacion de los numeros ingresados es: " <<multiplicacion<<endl;
	cout<<"La division de los numeros ingresados es: " <<division<<endl;


	 	
}
