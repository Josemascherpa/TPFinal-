#include "Auto1.h"
#include <cstdlib>
#include <conio2.h>

#include <iostream>
#include <cstdio>
#include "Auto.h"

using namespace std;
	
//Constructor Heredado de la clase Auto.
Auto1::Auto1(int vel,int y0,int col ):Auto(vel,y0,col){
	
	
	
}

Auto1::Auto1(){//Constructor vacio
	
}

void Auto1::update(){//Metodo update, para manejar el movimiento del auto usado por el usuario
	if(kbhit()){//Se utiliza la funcion kbhit para detectar las teclas
		int tecla = getch();
		bool mover = false;//Bandera utilizada para el movimineot
		switch(tecla){//Segun la tecla que se presiona
			case (100):{//DERECHA = LETRA D
				if(x<=60){
					borrar();//Borra la matriz en la anterior coordenadas
					x=x+getVel();//Se le suma en X la velocidad.
					mover = true;//Se coloca la bandera en true para que dibujeel movimiento en las nuevas coord
				};break;
				
				
			}
			case (97):{//IZQUIERDA = LETRA A
				if(x>=10){
					borrar();
					x=x-getVel();
					mover = true;
				};break;
			}
			default:break;
		}
		
		if(mover){//Si la bandera es true, dibuja en las nuevas coord pasadas anteriormente
			dibujar();
		}
	}
	
}


