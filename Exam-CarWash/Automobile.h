#pragma once

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Automobile
{
protected:
	string number;
	string color;
public:
	Automobile();	
	Automobile(string, string);
	virtual ~Automobile();

	string getNumber()const;
	string getColor()const;
	void fillAutomobile();
	virtual void showAutomobile() const;	
	virtual void signal() = 0;
};