#pragma once
#include "Automobile.h"
class Car :	public Automobile
{
public:
	Car();
	~Car();
	void signal()override;
};

