#include <iostream>

using namespace std;

class Bread {
public:
	virtual string getDiscription() = 0;
	virtual int getCost() = 0;
	virtual ~Bread() {}
};

class SimpleBread : public Bread
{
public:
	string getDiscription()
	{
		return "Bread";
	};
	int getCost()
	{
		return 3000;
	};
};

class BreadDecorator : public Bread
{
private:
	Bread& b_Decorator;
public:
	BreadDecorator(Bread& decorator) : b_Decorator(decorator) {}

	virtual string getDiscription()
	{
		return b_Decorator.getDiscription();
	};
	virtual int getCost() {
		return b_Decorator.getCost();
	};
};

class FriedEgg : public BreadDecorator
{
public:
	FriedEgg(Bread& decorator) : BreadDecorator(decorator) {}

	string getDiscription() 
	{
		return "Fried Egg " + BreadDecorator::getDiscription();
	};
	int getCost()
	{
		return 3000 + BreadDecorator::getCost();
	};
};

class Meat : public BreadDecorator
{
public:
	Meat(Bread& decorator) : BreadDecorator(decorator) {}
	string getDiscription()
	{
		return "Meet " + BreadDecorator::getDiscription();
	};
	int getCost()
	{
		return 5000 + BreadDecorator::getCost();
	};
};

class Sweet : public BreadDecorator
{
public:
	Sweet(Bread& decorator) : BreadDecorator(decorator) {}
	string getDiscription()
	{
		return "Sweet " + BreadDecorator::getDiscription();
	};
	int getCost()
	{
		return 2000 + BreadDecorator::getCost();
	};
};

int main()
{
	Bread* bread = new SimpleBread();
	cout << bread->getDiscription() << endl;
	cout << "Cost: " << bread->getCost() << endl << endl;;

	Bread* meatBread = new Meat(*bread);
	cout << meatBread->getDiscription() << endl;
	cout << "Cost: " << meatBread->getCost() << endl << endl;

	Bread* friedEggBread = new FriedEgg(*bread);
	cout << friedEggBread->getDiscription() << endl;
	cout << "Cost: " << friedEggBread->getCost() << endl << endl;

	Bread* sweetBread = new Sweet(*bread);
	cout << sweetBread->getDiscription() << endl;
	cout << "Cost: " << sweetBread->getCost() << endl;
}