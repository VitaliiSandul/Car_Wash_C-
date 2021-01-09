#pragma once
#include "Automobile.h"
class Police :	public Automobile
{
public:
	Police();	
	~Police();
	void signal()override;
};

