#include <iostream>
#include <math.h>

using namespace std;

int cubo(){
	int x,result;
	
	cout<<"Ingrese el numero que desea elevar al cubo: "<<endl;cin>>x;
	
	result=pow(x,3);

	cout<<x<<" elevado al cubo es igual a : "<<result;

}		
