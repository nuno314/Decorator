#include "Bread.h"
#include "BreadDecorator.h"
#include "FriedEgg.h"
#include "Meat.h"
#include "SimpleBread.h"
#include "Sweet.h"

using namespace std;

int main() 
{
	Bread* bread = new SimpleBread();
	cout << bread->getDiscription() << endl;
	cout << "Cost: " << bread->getCost() << endl << endl;;
	
	Bread* meatBread = new Meat(bread);
	cout << meatBread->getDiscription() << endl;
	cout << "Cost: " << meatBread->getCost() << endl << endl;

	Bread* friedEggBread = new FriedEgg(bread);
	cout << friedEggBread->getDiscription() << endl;
	cout << "Cost: " << friedEggBread->getCost() << endl << endl;

	Bread* sweetBread = new Sweet(bread);
	cout << sweetBread->getDiscription() << endl;
	cout << "Cost: " << sweetBread->getCost() << endl << endl;

	Bread* fullBread = new Meat(new FriedEgg(new Sweet(bread)));
	cout << fullBread->getDiscription() << endl;
	cout << fullBread->getCost() << endl << endl;
}