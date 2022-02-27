#include <iostream>

using namespace std;

void meses()
{
 
 int mes;
 
 cout << "Programa que intercambia numero de mes por nombre de mes" << endl << endl;
 cout << "Indique el numero del mes (1-12): "; cin >> mes;
 cout << endl;
 
 switch (mes)
 {
  case 1: cout << "El mes ingresado es Enero"; break;
  case 2: cout << "El mes ingresado es Febrero"; break;
  case 3: cout << "El mes ingresado es Marzo"; break;
  case 4: cout << "El mes ingresado es Abril"; break;
  case 5: cout << "El mes ingresado es Mayo"; break;
  case 6: cout << "El mes ingresado es Junio"; break;
  case 7: cout << "El mes ingresado es Julio"; break;
  case 8: cout << "El mes ingresado es Agosto"; break;
  case 9: cout << "El mes ingresado es Septiembre"; break;
  case 10: cout << "El mes ingresado es Octubre"; break;
  case 11: cout << "El mes ingresado es Noviembre"; break;
  case 12: cout << "El mes ingresado es Diciembre"; break;
  
  default: cout << "Seleccion incorrecta"; break;
 }

}
