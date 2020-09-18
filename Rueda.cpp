#include "Auto2.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Rueda.h"

using namespace std;

Rueda::Rueda(int vel, int y0, int col): Auto2(vel,y0,col){
	
	matriz[1][1];
	color[1][1];
	
	matriz[0][0] = 219;color[0][0]=col1;
	matriz[0][1]=219;color[0][1]=col1;
	matriz[1][0] = 219;color[1][0]=col1;
	matriz[1][1]=219;color[1][1]=col1;
	
	
	
}

Rueda::Rueda(){}

void Rueda::update(){//redefinido con polimorfismo
	if(tempo+vel1<clock()){//Si el tiempo ya paso
		
		borrar();//Borra la matriz
		y=y+1;//se le suma 1 en Y
		dibujar();//se vuelve a dibujar con la nueva coord
		
		if(y==54){//si la posicion en Y del auto es 52:
			contadorPuntos2++;//si el auto 2 ya supero la posicion del auto 1, se suma 1 punto
			borrar();//borra el auto2 en esa posicion			
			y=30;//Se le asigna nueva posicion en Y
			x0=11+rand()%(61+1-11);//Se le asigna una Posicion random en X
			x=x0;
			dibujar();//Y se vuelve a dibujar en esas nuevas coordenadas
			
		}
		tempo = clock();
	}
	
}

void Rueda::dibujar(){//Metodo dibujar, lo redefini con polimorfismo para esta clase nomas.
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			textcolor(color[1][1]);
			putchxy(x+i,y+k,matriz[i][k]);
		}
		
	}
}

/*
METODO BORRAR
*/

void Rueda::borrar(){//Metodo borrar, lo redefini con polimorfismo para esta clase nomas.
	
	for (int i= 0; i<2; i++){
		for (int k= 0; k<2; k++){
			textcolor(color[1][1]);	
			putchxy(x+i,y+k,' ');
			
		}
	}
}
