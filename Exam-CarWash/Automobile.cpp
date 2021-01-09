#include "Automobile.h"

Automobile::Automobile()
{
	fillAutomobile();	
}

Automobile::~Automobile()
{
}

Automobile::Automobile(string str1, string str2)
{
	number = str1;
	color = str2;
}

string Automobile::getNumber() const
{
	return number;
}

string Automobile::getColor() const
{
	return color;
}

void Automobile::fillAutomobile()
{
	char str1[3];
	char str2[3];
	int First, Second, Third, Fourth;

	First = rand() % 26 + 65;
	Second = rand() % 26 + 65;
	Third = rand() % 26 + 65;
	Fourth = rand() % 26 + 65;

	str1[0] = First;
	str1[1] = Second;
	str1[2] = '\0';

	str2[0] = Third;
	str2[1] = Fourth;
	str2[2] = '\0';

	number = string(str1) + " " + to_string(rand() % 9000 + 1000) + " " + string(str2);
	string COLOR[] = { "Olive", "Green", "Brown", "Purple", "Gray", "Silver", "Blue", "Red", "Yellow", "Lime" };
	color = COLOR[rand() % 10];
}

void Automobile::showAutomobile() const
{
	cout << "Car number: " << number << endl;
	cout << "Car color: " << color << endl;
}
