#include "Auto.h"
#include <cstdlib>
#include <conio2.h>
#include <ctime>
#include <iostream>
#include <cstdio>

using namespace std;

/*
// CONSTRUCTOR
*/

Auto::Auto(int vel,int y0, int col){//Constructor de la clase Auto (MADRE)
	
	Color = col;
	velocidad = vel;
	paso=CLOCKS_PER_SEC/velocidad; 
	tempo=clock(); 
	
	matriz[0][0]=0;  color[0][0] = 8;//MATRIZ QUE SE DIBUJA EN TODOS LOS AUTOS
	matriz[0][1]=219; color[0][1] = Color;
	matriz[0][2]=0; color[0][2] = 8;
	matriz[0][3]=219; color[0][3] = Color;
	matriz[1][0]=0;  color[1][0] = Color;
	matriz[1][1]=61; color[1][1] = 8;
	matriz[1][2]=47; color[1][2] = Color;
	matriz[1][3]=61; color[1][3] = 8;
	matriz[2][0]=30; color[2][0] = Color;
	matriz[2][1]=61; color[2][1] = 8;
	matriz[2][2]=0;  color[2][2] = Color;
	matriz[2][3]=61; color[2][3] = 8;
	matriz[3][0]=0;  color[3][0] = Color;
	matriz[3][1]=61; color[3][1] = 8;
	matriz[3][2]=92; color[3][2] = Color;
	matriz[3][3]=61; color[3][3] = 8;
	matriz[4][0]=0;  color[4][0] = 8;
	matriz[4][1]=219; color[4][1] = Color;
	matriz[4][2]=0; color[4][2] = 8;
	matriz[4][3]=219; color[4][3] = Color;
	
	ancho = 5;//Ancho de la matriz
	alto = 4;//Alto de la matriz
	x0 = 25;
	x = x0;
	y = y0;

	dibujar();
	
}

Auto::Auto(){//Constructor vacio
	
}

/*
METODO DIBUJAR
*/
void Auto::dibujar(){//Metodo dibujar, dibuja la matriz en las coordenas que se necesite
	for(int i=0;i<ancho;i++){
		for(int k=0;k<alto;k++){
			textcolor(color[i][k]);
			putchxy(x+i,y+k,matriz[i][k]);
		}
		
	}
}

/*
METODO BORRAR
*/

void Auto::borrar(){//Metodo borrar, se borra la matriz en las coord necesarias, y se la vacia
	
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);	
			putchxy(x+i,y+k,' ');
			
		}
	}
}

void Auto::update(){}//Movimiento de cada auto.


