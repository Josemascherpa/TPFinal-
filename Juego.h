#ifndef JUEGO_H
#define JUEGO_H
#include "Auto1.h"
#include "Auto2.h"
#include "Auto3.h"
#include "Rueda.h"

class Juego{
	Auto1 *auto1;
	Auto2 *auto2;
	Auto3 *auto3;
	Rueda *rueda;
	

	
protected: 
	
	
public:
	Juego();
	int play();
	int checkCollision();
	void Puntaje();
	void Mapeado();
};

#endif
