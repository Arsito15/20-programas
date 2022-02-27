#include <iostream>

using namespace std;

void celfahkel(){
	
	int opcion;
	float cen;
	float kel,fah;	
	
	cout<<"Convertidor de grados centigrados\n";
	cout<<"Ingrese datos que quiere convertir: ";cin>>cen;	
	cout<<"Elige un a opcion: "<<endl<<"1.Convertir a kelvin: "<<endl<<"2.Convertir a fahrenheit: "<<endl;cin>>opcion;	

	switch(opcion){
	case 1:	
		kel=273.15+cen;
		cout<<"La conversion es: "<<endl;
		cout<<cen<<" grados centigrados es igual a: "<<kel<<"grados kelvin";	
	break;	
	
	case 2:	
		fah=(9/5)*cen+32;
		cout<<"La conversion es: "<<endl;
		cout<<cen<<" grados centigrados es igual a: "<<fah<<"grados fahrenheit";	
	break;	
		
	}	
}
