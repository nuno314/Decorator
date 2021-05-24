#pragma once
#include <iostream>

using namespace std;

class Bread {
public:
	virtual string getDiscription() = 0;
	virtual int getCost() = 0;
	virtual ~Bread() {}
};