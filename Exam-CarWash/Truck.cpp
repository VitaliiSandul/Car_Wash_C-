#include "Truck.h"

Truck::Truck() :Automobile()
{
}

Truck::~Truck()
{
}

void Truck::signal()
{
	PlaySound(TEXT("Truck.wav"), NULL, SND_SYNC);
}