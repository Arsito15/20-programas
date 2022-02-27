#include <iostream>
#include <stdlib.h>
#include "Operaciones.cpp"
#include "Par o impar.cpp"
#include "conversiones.cpp"
#include "Pal palindrome.cpp"
#include "E_romanos.cpp"
#include "numeroE_letra.cpp"
#include "numeroD_letra.cpp"
#include "Una tabla.cpp"
#include "Tablas 1-10.cpp"
#include "multi_graf.cpp"
#include "decimal_binario.cpp"
#include "decimal_hexa.cpp"
#include "figuras.cpp"
#include "mov_dot.cpp"
#include "cajero.cpp"
#include "hipotenusa.cpp"
#include "cubo.cpp"
#include "meses.cpp"
#include "funcionx_y.cpp"
#include "grados_conversiones.cpp"

using namespace std;


int main(){
	int opc;
	int eje=0;
	
	while(1){
	system("cls");	
	cout<<'\n';
	cout<<"Escoga el ejercicio que desee: " <<endl;
	cout<<"1.Suma, Resta, Multiplicacion y Division de dos numeros" <<endl;
	cout<<"2.Determinar si un numero es par o impar" <<endl;
	cout<<"3.Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" <<endl;
	cout<<"4.Determinar si una palabra o un numero es palindromo" <<endl;	
	cout<<"5.Conversion de numeros arabigos a romanos" <<endl;
	cout<<"6.Conversion de numeros enteros a letras" <<endl;
	cout<<"7.Conversion de numeros enteros con decimal a letras" <<endl;
	cout<<"8.Una tabla de multiplicar" <<endl;	
	cout<<"9.Todas las tablas de multiplicar del 1 al 10" <<endl;
	cout<<"10.Multiplicacion grafica" <<endl;
	cout<<"11.Conversion de números decimales a binario" <<endl;
	cout<<"12.Conversion de numeros decimales a hexadecimales" <<endl;
	cout<<"13.Crear Figuras Geometricas Basicas" <<endl;
	cout<<"14.Mover un punto en toda la pantalla" <<endl;
	cout<<"15.Simulacion de un Cajero (Automata)" <<endl;
	cout<<"16.Calcular la hipotenusa" <<endl;
	cout<<"17.Cubo de un numero" <<endl;
	cout<<"18.Seleccion de los 12 meses" <<endl;
	cout<<"19.Calculo de una funcion de dos variables" <<endl;
	cout<<"20.Conversion de grados celsius a fahrenheit o kelvin" <<endl;	
	cin>>opc;	
			
	switch(opc){
		
	case 0:	
	continue;
	  	eje=1;
	break;	

	case 1:	
		operaciones();
		system("pause");
	break;	

	case 2:	
		paroimpar();
		system("pause");
	break;
	
	case 3:	
		conversiones();
		system("pause");
	break;
	
	case 4:	
		palindromo();
		system("pause");
	break;
	
	case 5:	
		romanos();
		system("pause");
	break;	
	
	case 6:	
		enteroaletras();
		system("pause");
	break;	
	
	case 7:	
		decimaletra();
		system("pause");
	break;		
	
	case 8:	
		unatabla();
		system("pause");
	break;	
	
	case 9:	
		tablas();
		system("pause");
	break;	

	case 10:	
		grafica();
		system("pause");
	break;	
	
	case 11:	
		decbin();
		system("pause");
	break;		

	case 12:	
		dechexa();
		system("pause");
	break;	
	
	case 13:	
		figuras();
		system("pause");
	break;
	
	case 14:	
		dotm();
		system("pause");
	break;
	
	case 15:	
		cajero();
		system("pause");
	break;	
	
	case 16:	
		hipotenusa();
		system("pause");
	break;	
	
	case 17:	
		cubo();
		system("pause");
	break;
	
	case 18:	
		meses();
		system("pause");
	break;
	
	case 19:	
		funcion();
		system("pause");
	break;	
	
	case 20:	
		celfahkel();
		system("pause");
	break;											
	}				
			
	} 

}
