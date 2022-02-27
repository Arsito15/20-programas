#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y, int a){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);	
}

void dotm(){
	
	int x = 10, y=25 ,a=1;
	gotoxy(x,y);cout<<"*";
	
	
	while(a=1)	
	{
		Sleep(100);
		
		//izquierda
		if (GetAsyncKeyState(0x25)){
			
			gotoxy(x,y);cout<<" ";
			
			x--;
			gotoxy(x,y);cout<<"*";
						
		}
		
		//derecha
		if (GetAsyncKeyState(0x27)){
			
			gotoxy(x,y);cout<<" ";
			
			x++;
			gotoxy(x,y);cout<<"*";
							
		}
		
		//abajo
			if (GetAsyncKeyState(0x28)){
			
			gotoxy(x,y);cout<<" ";
			
			y++;
			gotoxy(x,y);cout<<"*";
								
		}
		
		//arriba
		if (GetAsyncKeyState(0x26)){
			
			gotoxy(x,y);cout<<" ";
			
			y--;
			gotoxy(x,y);cout<<"*";
		
		//cerrar con "Q"
		if(GetAsyncKeyState(0x51))	
		break;
											
		}
	}
		
}	
