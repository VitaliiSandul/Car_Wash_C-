#include "Car.h"

Car::Car():Automobile()
{
}

Car::~Car()
{
}

void Car::signal()
{
	PlaySound(TEXT("Car.wav"), NULL, SND_SYNC);
}
