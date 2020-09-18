#include "Auto3.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto.h"

using namespace std;

Auto3::Auto3 (int vel, int y0,int col) : Auto (vel,y0,col){
	col1=col;
	vel1=vel;
	
}

Auto3::Auto3(){}

void Auto3::update(){//Movimiento automatico
	
	if(tempo+vel1<clock()){
		
		borrar();
		y=y+1;
		x = x - (-2+rand()%(2+1-(-2)));//Se le coloca un random en X para generar los movimientos hacia los costados
		dibujar();//Se lo dibuja
		
		if(y==53 || x==7 || x==60){
			contadorPuntos3++;
			borrar();			
			y=30;
			x0=20+rand()%(45+1-20);
			x=x0;
			dibujar();
			
		}
		tempo = clock();
		
	}
}


void Auto3::Choque(){//Metodo choque, si detecta colision el auto se dibuja dado vuelta.

	
		matriz[4][0]=219;  color[4][0] = col1;
		matriz[4][1]=0; color[4][1] = 8;
		matriz[4][2]=219; color[4][2] = col1;
		matriz[4][3]=0; color[4][3] = 8;
		
		matriz[3][0]=61;  color[1][0] = 8;
		matriz[3][1]=47; color[1][1] = col1;
		matriz[3][2]=61; color[1][2] = 8;
		matriz[3][3]=0; color[1][3] = 8;
		
		matriz[2][0]=61; color[2][0] = 8;
		matriz[2][1]=0; color[2][1] = col1;
		matriz[2][2]=61;  color[2][2] = 8;
		matriz[2][3]=31; color[2][3] = col1;
		
		matriz[1][0]=61;  color[3][0] = 8;
		matriz[1][1]=92; color[3][1] = col1;
		matriz[1][2]=61; color[3][2] = 8;
		matriz[1][3]=0; color[3][3] = 8;
		
		matriz[0][0]=219;  color[0][0] = col1;
		matriz[0][1]=0; color[0][1] = 8;
		matriz[0][2]=219; color[0][2] = col1;
		matriz[0][3]=0; color[0][3] = 8;
		
		dibujar();
	
}

void Auto3::setVel(int vel2){//se setea velocidad al subir los niveles.
	vel1=vel2;
	
	
}
