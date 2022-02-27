#include <iostream>

using namespace std;

int cajero(){
	int saldo_inicial = 1000;
	int saldo, reintegro, opcion, agregar;
	
	cout<<"Bienvenido a su Cajero automatico";
	cout<<"\n1. Ingreso en cuenta";
	cout<<"\n2. Reintegro";
	cout<<"\n3. Ver saldo de cuenta";
	cout<<"\n4. Salir";
	cout<<"\nEscoja una opcion: ";
	cin>>opcion;
	
if(opcion==1){
	cout<<"\nIngrese la cantidad a depositar: ";cin>>agregar;
	saldo = saldo_inicial + agregar;
	cout<<"\nCantidad disponible en cuenta: "<<saldo;
			}
			else if(opcion==2){
			cout<<"\nCuanta cantidad desea retirar: ";cin>>reintegro;
			if(reintegro>1000){
			cout<<"\nLa cantidad digitada es mayor a 1000, digite de nuevo la cantidad a retirar"<<endl;cin>>reintegro;
			}
			saldo = saldo_inicial - reintegro;
			cout<<"\nCantidad disponible en cuenta: "<<saldo<<endl;
			}
			else if(opcion==3){
			cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial<<endl;
			}
			else if(opcion==4){
			cout<<"Gracias por utilizar nuestro cajero autormatico"<<endl;
			}
			else{
			cout<<"Se equivoco de opcion de menu"<<endl;
			}	
	
	cin.get();	
	
}			
