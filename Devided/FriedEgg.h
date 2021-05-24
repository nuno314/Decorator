#pragma once
#include "BreadDecorator.h"

class FriedEgg : public BreadDecorator
{
public:
	FriedEgg(Bread& decorator) : BreadDecorator(decorator){}

	string getDiscription();
	int getCost();
};