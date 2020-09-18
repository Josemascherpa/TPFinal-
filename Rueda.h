#ifndef RUEDA_H
#define RUEDA_H

class Rueda : public Auto2{
protected: 
	
	
public:
	int matriz[1][1];
	int color[1][1];
	Rueda(int, int ,int);
	Rueda();
	void update();
	void borrar();
	void dibujar();
};

#endif






