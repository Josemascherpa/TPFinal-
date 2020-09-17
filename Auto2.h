#ifndef AUTO2_H
#define AUTO2_H
#include "Auto2.h"
#include "Auto.h"

class Auto2 : public Auto{
protected:
	int col1;
	int vel1;
	
	
	
public:
	int contadorPuntos2=0;
	Auto2(int,int,int);
	Auto2();
	void update();
	void Choque();
	int getPuntos(){return contadorPuntos2;};
	void setVel(int);
	int getVel(){return vel1;};
	
};



#endif
