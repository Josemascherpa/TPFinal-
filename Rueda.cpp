#include "Auto2.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Rueda.h"

using namespace std;

Rueda::Rueda(int vel, int y0, int col): Auto2(vel,y0,col){
	
	
	matriz[0][0]=' ';  color[0][0] = 8;//MATRIZ QUE SE DIBUJA EN TODOS LOS AUTOS
	matriz[0][1]=219; color[0][1] = Color;
	matriz[0][2]=' '; color[0][2] = 8;
	matriz[0][3]=' '; color[0][3] = Color;
	matriz[1][0]=' ';  color[1][0] = Color;
	matriz[1][1]=' '; color[1][1] = 8;
	matriz[1][2]=' '; color[1][2] = Color;
	matriz[1][3]=' '; color[1][3] = 8;
	matriz[2][0]=' '; color[2][0] = Color;
	matriz[2][1]=' '; color[2][1] = 8;
	matriz[2][2]=' ';  color[2][2] = Color;
	matriz[2][3]=' '; color[2][3] = 8;
	matriz[3][0]=' ';  color[3][0] = Color;
	matriz[3][1]=' '; color[3][1] = 8;
	matriz[3][2]=' '; color[3][2] = Color;
	matriz[3][3]=' '; color[3][3] = 8;
	matriz[4][0]=' ';  color[4][0] = 8;
	matriz[4][1]=' '; color[4][1] = Color;
	matriz[4][2]=' '; color[4][2] = 8;
	matriz[4][3]=' '; color[4][3] = Color;
	dibujar();
}

Rueda::Rueda(){}

void Rueda::update(){
	if(tempo+vel1<clock()){//Si el tiempo ya paso
		
		borrar();//Borra la matriz
		y=y+1;//se le suma 1 en Y
		dibujar();//se vuelve a dibujar con la nueva coord
		
		if(y==52){//si la posicion en Y del auto es 52:
			contadorPuntos2++;//si el auto 2 ya supero la posicion del auto 1, se suma 1 punto
			borrar();//borra el auto2 en esa posicion			
			y=30;//Se le asigna nueva posicion en Y
			x0=11+(rand()%49);//Se le asigna una Posicion random en X
			x=x0;
			dibujar();//Y se vuelve a dibujar en esas nuevas coordenadas
			
		}
		tempo = clock();
	}
	
	
}
void Rueda::Choque(){
	matriz[0][0]=' ';  color[0][0] = 8;//MATRIZ QUE SE DIBUJA EN TODOS LOS AUTOS
	matriz[0][1]=219; color[0][1] = Color;
	matriz[0][2]=' '; color[0][2] = 8;
	matriz[0][3]=' '; color[0][3] = Color;
	matriz[1][0]=' ';  color[1][0] = Color;
	matriz[1][1]=' '; color[1][1] = 8;
	matriz[1][2]=' '; color[1][2] = Color;
	matriz[1][3]=' '; color[1][3] = 8;
	matriz[2][0]=' '; color[2][0] = Color;
	matriz[2][1]=' '; color[2][1] = 8;
	matriz[2][2]=' ';  color[2][2] = Color;
	matriz[2][3]=' '; color[2][3] = 8;
	matriz[3][0]=' ';  color[3][0] = Color;
	matriz[3][1]=' '; color[3][1] = 8;
	matriz[3][2]=' '; color[3][2] = Color;
	matriz[3][3]=' '; color[3][3] = 8;
	matriz[4][0]=' ';  color[4][0] = 8;
	matriz[4][1]=' '; color[4][1] = Color;
	matriz[4][2]=' '; color[4][2] = 8;
	matriz[4][3]=' '; color[4][3] = Color;
	dibujar();
}
