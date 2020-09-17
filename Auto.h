#ifndef AUTO_H
#define AUTO_H
#include <ctime>

class Auto{
protected:
	int x;
	int y;
	int matriz[5][4];
	int color[5][4]; 
	int ancho;
	int alto;
	clock_t tempo; 
	clock_t paso; 
	int velocidad;
	int Color;
	int x0;
	bool choque = false;
	

public:
	
	
	void borrar(); 
	Auto(int v,int y0,int col);
	Auto();
	void dibujar();
	int getVel(){return velocidad;};
	virtual void update();
	int getX(){return x;}
	int getY(){return y;}
	
	
};



#endif
