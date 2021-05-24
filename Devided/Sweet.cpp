#include "Sweet.h"

string Sweet::getDiscription()
{
	return "Sweet " + BreadDecorator::getDiscription();
}

int Sweet::getCost()
{
	return 2000 + BreadDecorator::getCost();
}

