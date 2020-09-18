#include "Auto2.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto.h"

using namespace std;

Auto2::Auto2(int vel,int y0, int col):Auto(vel,y0,col){
	x0=8+rand()%(61+1-8);//Se coloca un numero random en la posicion X para respawnear el autito
	x=x0;//Se iguala el numero rand a la X
	vel1=vel;
	col1=col;
	
	
}

Auto2::Auto2(){
	
}

void Auto2::update(){
	if(tempo+vel1<clock()){//Si el tiempo ya paso
		
		borrar();//Borra la matriz
		y=y+1;//se le suma 1 en Y
		dibujar();//se vuelve a dibujar con la nueva coord
		
		if(y==53){//si la posicion en Y del auto es 52:
			contadorPuntos2++;//si el auto 2 ya supero la posicion del auto 1, se suma 1 punto
			borrar();//borra el auto2 en esa posicion			
			y=30;//Se le asigna nueva posicion en Y
			x0=8+rand()%(61+1-8);//Se le asigna una Posicion random en X
			x=x0;
			dibujar();//Y se vuelve a dibujar en esas nuevas coordenadas
			
		}
		tempo = clock();
	}
}

void Auto2::Choque(){//Metodo choque, contiene la matriz del auto pero dada vuelta, para 
	//hacer como si cuando chocan , el auto se da vuelta, y se lo llama al colisionar.
	
	
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

	dibujar();//Cuando se lo llama, se reemplaza la matriz normal del metodo dibujar, 
	//por la misma pero dada vuelta.
	
}

void Auto2::setVel(int vel2){//Se setea la velocidad para aumentarla al superar los niveles.
	vel1=vel2;
	
	
}

