#pragma once
#include "BreadDecorator.h"

class Meat : public BreadDecorator
{
public:
	Meat(Bread* decorator) : BreadDecorator(decorator){}
	string getDiscription();
	int getCost();
};