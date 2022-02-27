#include <iostream>

using namespace std;

void tablas(){
	
	for(int i = 1; i<=10; i++){
		cout<<"-------------------";
		cout<<"Tabla del "<<i<<endl;
		
		for(int m=0; m <=10; m++){
		cout<<i<<" x "<<m<<" = "<<i*m<<endl;	
		}	
	}

}	
