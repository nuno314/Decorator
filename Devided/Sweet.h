#pragma once
#include "BreadDecorator.h"

class Sweet : public BreadDecorator
{
public:
	Sweet(Bread& decorator) : BreadDecorator(decorator) {}
	string getDiscription();
	int getCost();
};