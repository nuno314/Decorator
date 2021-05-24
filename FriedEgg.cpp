#include "FriedEgg.h"

string FriedEgg::getDiscription() 
{
	return "Fried Egg" + BreadDecorator::getDiscription();
}

int FriedEgg::getCost()
{
	return 3000 + BreadDecorator::getCost();
}