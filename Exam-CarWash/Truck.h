#pragma once
#include "Automobile.h"
class Truck : public Automobile
{
public:
	Truck();
	~Truck();
	void signal()override;
};

