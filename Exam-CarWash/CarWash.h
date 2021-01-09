#pragma once
#include "Queue.h"
#include "Automobile.h"
#include "Car.h"
#include "Truck.h"
#include "Police.h"

class CarWash
{
	int time_wash;
	int profit_per_day;
	int cost_per_wash;
public:
	CarWash();
	void setCar(Queue<Automobile*> &obj);
	void washCar();
	bool is_empty_washcar();
	int getProfit();
	
};