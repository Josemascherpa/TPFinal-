#ifndef AUTO_H
#define AUTO_H
#include <ctime>

class Auto{
protected:
	int x;
	int y;
	
	int ancho;
	int alto;
	clock_t tempo; 
	clock_t paso; 
	int velocidad;
	int Color;
	int x0;
	bool choque = false;
	

public:
	
	int matriz[5][4];
	int color[5][4]; 
	virtual void borrar(); 
	Auto(int v,int y0,int col);
	Auto();
	virtual void dibujar();
	int getVel(){return velocidad;};
	void update();
	int getX(){return x;}
	int getY(){return y;}
	
	
};



#endif
