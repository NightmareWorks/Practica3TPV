#pragma once
#include "ObjetoPG.h"

class Boton : public ObjetoPG
{
public:
	typedef void CallBack_t(JuegoPG* jg);
	Boton(CallBack_t* callback, int py);
	~Boton();
	virtual void draw()const;
	virtual void update();
	virtual bool onClick();

protected:
	CallBack_t * cb;
	
};

