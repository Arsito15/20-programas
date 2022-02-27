#include <iostream>

using namespace std;

void conversiones(){
	int op;
	double pulgadas,kilometros,millas,metros,kilos,libras;
	
	cout<<"Ingrese una opcion: " <<endl;
	cout<<"1.kilometros a millas" <<endl;
	cout<<"2.millas a kilometros" <<endl;
	cout<<"3.metros a pulgadas" <<endl;
	cout<<"4.pulgadas a metros" <<endl;		
	cout<<"5.libras a kilos" <<endl;	
	cout<<"6.kilos a libras" <<endl;	
	cin>>op;

	switch(op){
		
		case 1:		
			cout<<"-----kilometros a millas-----" <<endl;
			cout<<"Ingrese la cantidad a convertir:" <<endl;cin>>kilometros;
			millas=kilometros*0.62;
			cout<<kilometros<<" kilometros equivalen a " <<millas<<"millas."<<endl;
			break;		
		
		case 2:
			cout<<"-----millas a kilometros-----" <<endl;
			cout<<"Ingrese la cantidad a convertir:" <<endl;cin>>millas;
			kilometros=millas/0.62;
			cout<<millas<<" millas equivalen a " <<kilometros<<"kilometros."<<endl;			
			break;
					
		case 3:
			cout<<"-----metros a pulgadas-----" <<endl;
			cout<<"Ingrese la cantidad a convertir:" <<endl;cin>>metros;
			metros=pulgadas*39.37;
			cout<<metros<<" metros equivalen a " <<pulgadas<<"pulgadas."<<endl;			
			break;
						
		case 4:
			cout<<"-----pulgadas a metros-----" <<endl;
			cout<<"Ingrese la cantidad a convertir:" <<endl;cin>>pulgadas;
			pulgadas=metros/39.37;
			cout<<pulgadas<<" pulgadas equivalen a " <<metros<<"metros."<<endl;			
			break;
						
		case 5:
			cout<<"-----libras a kilos-----" <<endl;
			cout<<"Ingrese la cantidad a convertir:" <<endl;cin>>libras;
			libras=kilos*0.45;
			cout<<libras<<" libras equivalen a " <<kilos<<"kilos."<<endl;				
			break;
						
		case 6:
			cout<<"-----kilos a libras-----" <<endl;	
			cout<<"Ingrese la cantidad a convertir:" <<endl;cin>>kilos;
			kilos=libras/0.45;
			cout<<kilos<<" kilos equivalen a " <<libras<<"libras."<<endl;				
			break;
						
		default:
			cout<<"La opcion ingresada no es correcta" <<endl;	
			break;			
	}

	
}	
