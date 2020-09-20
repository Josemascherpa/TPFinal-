#include "Juego.h"
#include <iostream>
#include <conio2.h>
#include <climits>
#include "Auto3.h"
#include "Auto1.h"
#include "Auto2.h"
#include "Auto.h"
#include <ctime>

using namespace std;

Juego::Juego(){
	auto1 = new Auto1(3,50,10);//Se generan los objetos en el constructor de juego
	auto2 = new Auto2 (150,30,14);
	auto3 = new Auto3(125,30,12);
	rueda = new Rueda(300,30,14);
	
}


int Juego::checkCollision(){//metodo para detectar las colisiones
	int x1 = auto1->getX();//Se recuperan las coordenadas X e Y de cada auto
	int y1 = auto1->getY();
	int x2 = auto2->getX();
	int y2 = auto2->getY();
	int x3 = auto3->getX();
	int y3 = auto3->getY();
	int x4=rueda->getX();
	int y4=rueda->getY();
	
	int ancho= 5;//Tamaño de la matriz
	int alto = 4;
	
	if(x1 > (x2 - ancho) && x1 < (x2 + ancho) && y1 > (y2 - alto) && y1 < (y2 + alto)){
		return 2;//se compara siempre Las coordenadas del auto1 con el auto2, para ver si coinciden
	}//retorna 2 si el auto con el que se colisiona es el 2.
	   
	if(x1 > (x3 - ancho) && x1 < (x3 + ancho) && y1 > (y3 - alto) && y1 < (y3 + alto)){
		return 3;//se compara siempre Las coordenadas del auto1 con el auto3, para ver si coinciden
	}//retorna 3 si el auto con el que se colisiona es el 3.
	if(x1 > (x4 - 5) && x1 < (x4 + 2) && y1 > (y4 - 3) && y1 < (y4 + 2)){
		return 4;
	}
	
	return 0;//retorna 0 si no detecta colision
}

int Juego::play(){//Metodo con el que se maneja el juego, que es llamado en el main.
	bool gameon = false;
	Mapeado();
	bool terminar = false;
	while(!gameon){
		
		Puntaje();//metodo encargado de manejar el puntaje del juego.
		auto1->update();//metodo movimiento auto 1.
		auto2->update();//metodo movimiento auto 2.
		auto3->update();//metodo movimiento auto 3.
		rueda->update();
		
		if((auto2->getX() && auto2->getY()) == (auto3->getX() && auto3->getY())){
			auto3->update();
		}
		
		
		if(checkCollision()==2){//si el metodo checkCollision devuelve 2, porque colisionamos con el auto 2
			auto2->Choque();//se llama al metodo choque, para dar vuelta la matriz del auto2 como si chocamos
			gameon = true;//Termina el juego.
			
		}
		
		if(checkCollision()==3){//si el metodo checkCollision devuelve 3, porque colisionamos con el auto 3
			auto3->Choque();//se llama al metodo choque, para dar vuelta la matriz del auto2 como si chocamos
			gameon=true;
		}
		if(checkCollision()==4){
			rueda->Choque();
			gameon=true;
		}
		
	}
	
	
}
void Juego::Puntaje(){//metodo para manejar el puntaje
	int contadorPuntos = auto2->getPuntos()+auto3->getPuntos() + rueda->getPuntos();//suma de puntajes de cada auto
	
	switch(contadorPuntos){//Suma de velocidad de 20 en 20, de cada auto, seteando la velocidad de cada uno.
		case 20:
			gotoxy(75,53);
			cout<<"Subiste al nivel 2.";
			auto2->setVel(140);
			auto3->setVel(120);break;
			
		case 40:
			gotoxy(75,53);
			cout<<"Subiste al nivel 3.";
			auto2->setVel(125);
			auto3->setVel(105);break;
		case 60:
			gotoxy(75,53);
			cout<<"Subiste al nivel 4.";
			auto2->setVel(110);
			auto3->setVel(80);break;
		case 80:
			gotoxy(75,53);
			cout<<"Subiste al nivel 5.";
			auto2->setVel(100);
			auto3->setVel(70);break;
		case 100:
			gotoxy(75,53);
			cout<<"Subiste al nivel 6.";
			auto2->setVel(80);
			auto3->setVel(65);break;
		case 120:
			gotoxy(75,53);
			cout<<"Subiste al nivel 7.";
			auto2->setVel(70);
			auto3->setVel(55);break;
		case 140:
			gotoxy(75,53);
			cout<<"Subiste al nivel 8.";
			auto2->setVel(60);
			auto3->setVel(45);break;
		case 160:
			gotoxy(75,53);
			cout<<"Subiste al nivel 9.";
			auto2->setVel(50);
			auto3->setVel(40);break;
		case 180:
			gotoxy(75,53);
			cout<<"Subiste al nivel 10.";
			auto2->setVel(30);
			auto3->setVel(25);break;
		case 200:
			gotoxy(75,53);
			cout<<"Subiste al nivel 11.";
			auto2->setVel(20);
			auto3->setVel(20);break;
		case 220:
			gotoxy(75,53);
			cout<<"Subiste al nivel 12.";
			auto2->setVel(10);
			auto3->setVel(10);break;
		case 240:
			gotoxy(75,53);
			cout<<"Subiste al nivel 13.";
			auto2->setVel(5);
			auto3->setVel(3);break;
		defautl:break;
		
	}
	
		
	gotoxy(75,52);//En esta posicion se muestra el puntaje.
	cout<<"Puntaje:"<<contadorPuntos;
	
	
}
void Juego::Mapeado(){//Metodo de dibujo de calle y texto.
	
	gotoxy(77,44);//Posicion donde se muentra el texto
	cout<<"TP Final: El auto se mueve con las letras A y D, "<<endl;
	gotoxy(77,45);
	cout<<"se debe esquivar los demas autos para obtener un puntaje,"<<endl;
	gotoxy(77,46);
	cout<<"si choca contra otro auto pierde, cada 20 puntos se sube de nivel"<<endl;
	gotoxy(77,47);
	cout<<"y se aumenta la velocidad de los autos."<<endl;
	
	
	
	gotoxy(86,32);
	cout<<"    _____ ";
	gotoxy(86,33);
	cout<<"	/ ____|             ";
	gotoxy(86,34);
	cout<<"	| |     __ _ _ __   ";
	gotoxy(86,35);
	cout<<"	| |    / _` | '__|  ";
	gotoxy(86,36);
	cout<<"	| |___| (_| | |     ";
	gotoxy(86,37);
	cout<<"   \\_____\__,_|_|_|  "; 
	
	
	gotoxy(85,38);
	cout<<" _ __ __ _  ___ ____ ___ "; 
	gotoxy(85,39);
	cout<<"| '__/ _` |/ __/ _ \ ' __|"; 
	gotoxy(85,40);
	cout<<"| | | (_| | (_ | __/| |   "; 
	gotoxy(85,41);
	cout<<"|_|  \\__,_|\___|\\___||_|   ";   


	
	
	for (int i=30;i<=60;i++){//Dibujo de limites
		putchxy(5,i,'|');
		
	}
	for (int i=30;i<=60;i++){
		putchxy(4,i,'|');
		
	}
	for (int i=30;i<=60;i++){
		putchxy(66,i,'|');
		
	}
	for (int i=30;i<=60;i++){
		putchxy(67,i,'|');
		
	}
	
}
