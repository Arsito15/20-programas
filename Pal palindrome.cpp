#include <iostream>

using namespace std;

void palindromo(){
	string palabra;
	string palresultado;
	int i=0;
	cout<<"Ingrese una palabra para comprobar si es palindroma:";cin>>palabra;
	cout<<"----------------------------------------------------";
	for(i=palabra.size() -1; i>=0 ; i--){
		palresultado += palabra [i];
	}
	if (palabra == palresultado){
		cout<<"\nLa palabra ingresada: "<<palabra<<",es palindroma";
	}
	else{
		cout<<"\nLa palabra ingresadad:"<<palabra<<",no es palindroma";	
	}
	
}
