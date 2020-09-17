#ifndef AUTO1_H
#define AUTO1_H
#include "Auto1.h"
#include "Auto.h"


class Auto1 : public Auto{
protected:
	int matriz[5][4];
	int color[5][4];
public:
	Auto1(int,int,int);
	Auto1();	
	void update();
	
	
	
};

#endif
