#include <iostream>

using namespace std;

void unatabla(){
	int num;	

	do{
		cout<<"Ingrese un numero: "; cin>>num;
	}
	while ((num<1) || (num>100));
	
	for(int i=1;i<=10;i++){
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
	
}
