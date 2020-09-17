#ifndef AUTO3_H
#define AUTO3_H
#include "Auto3.h"
#include "Auto.h"


class Auto3 : public Auto{
	
protected:
	int col1;
	int vel1;
	
public:
	int contadorPuntos3=0;
	Auto3(int,int,int);
	Auto3();
	void update();
	void Choque();
	int getPuntos(){return contadorPuntos3;};
	void setVel(int);
};
#endif
