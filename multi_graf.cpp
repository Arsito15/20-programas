#include <iostream>

using namespace std;

void grafica(){
    int num1, num2, a, b, f1,f2, fn;

    cout<<"Ingrese un numero: "<<endl;cin>>num1;
    cout<<"Ingrese otro numero: "<<endl; cin>>num2;

    cout<<"          "<<num1<<endl;
    cout<<"         "<<"X"<<num2<<endl;
    cout<<"          ""----"<<endl;

    if (num2<99)
    {
        a=num2%100/10;
        b = num2%10/1;

        f1 = b*num1;
		cout<<"           "<<f1<<endl;

         f2= a*num1;
    cout<<"          "<<f2<<endl;
    cout<<"           ""----"<<endl;

    fn = num1 * num2;
    cout<<"         "<<fn<<endl;
    }
    
}
