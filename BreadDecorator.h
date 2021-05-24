#pragma once
#include "Bread.h"

class BreadDecorator : public Bread 
{
private:
	Bread& b_Decorator;
public:
	BreadDecorator(Bread& decorator) : b_Decorator(decorator) {}

	virtual string getDiscription();
	virtual int getCost();
};