#include "Meat.h"

string Meat::getDiscription() 
{
	return "Meet " + BreadDecorator::getDiscription();
}

int Meat::getCost()
{
	return 5000 + BreadDecorator::getCost();
}

