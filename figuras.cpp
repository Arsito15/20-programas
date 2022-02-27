#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);	
}

void figuras(){
	int op;

	cout<<"Escoga la figura que desee: " <<endl;
	cout<<"1.Cuadrado" <<endl;
	cout<<"2.Rectangulo" <<endl;
	cout<<"3.Triangulo" <<endl;
	cout<<"4.Rombo" <<endl;
	cin>>op;

	switch(op){

	case 1:	
		cout<<"-----Cuadrado-----" <<endl;
		gotoxy(5,31);cout<<"********";
		gotoxy(5,32);cout<<"*      *";
		gotoxy(5,33);cout<<"*      *";
		gotoxy(5,34);cout<<"********";
	break;	

	case 2:	
		cout<<"-----Rectangulo-----" <<endl;
		gotoxy(4,31);cout<<"************";
		gotoxy(4,32);cout<<"*          *";
		gotoxy(4,33);cout<<"*          *";
		gotoxy(4,34);cout<<"************";
	break;	

	case 3:	
		cout<<"-----Triangulo-----" <<endl;
		gotoxy(4,31);cout<<"     *";
		gotoxy(4,32);cout<<"   *  *";
		gotoxy(4,33);cout<<"  *    *";
		gotoxy(4,34);cout<<" *      *";
		gotoxy(4,35);cout<<" ********";
	break;	

	case 4:	
		cout<<"-----Rombo-----" <<endl;
		gotoxy(4,31);cout<<"     *";
		gotoxy(4,32);cout<<"   *  *";
		gotoxy(4,33);cout<<"  *    *";
		gotoxy(4,34);cout<<" *      *";
		gotoxy(3,35);cout<<" *        *";
		gotoxy(4,36);cout<<" *      *";		
		gotoxy(4,37);cout<<"  *    *";		
		gotoxy(4,38);cout<<"   *  *";		
		gotoxy(4,39);cout<<"     *";		
		
	break;
	}
		
}
