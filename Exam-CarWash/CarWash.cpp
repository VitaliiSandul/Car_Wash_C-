#include "CarWash.h"

CarWash::CarWash()
{	
	time_wash = 0;                                    // время оставшееся на мойку текущей машины
	profit_per_day = 0;
	cost_per_wash = 0;
}

void CarWash::setCar(Queue<Automobile*>& obj)
{

	Car*car = dynamic_cast<Car*>(obj.peek());
	if (car)
	{
		time_wash = 10;
		cost_per_wash = 100;
		profit_per_day += cost_per_wash;
		obj.pop();
		car->signal();
		return;
	}
	Truck*truck = dynamic_cast<Truck*>(obj.peek());
	if (truck)
	{
		time_wash = 15;
		cost_per_wash = 150;
		profit_per_day += cost_per_wash;
		obj.pop();
		truck->signal();
		return;

	}
	Police*police = dynamic_cast<Police*>(obj.peek());
	if (police)
	{
		time_wash = 7;
		cost_per_wash = 70;
		profit_per_day += cost_per_wash;
		obj.pop();
		police->signal();
		return;
	}
}

void CarWash::washCar()
{
	time_wash--;
}

bool CarWash::is_empty_washcar()
{
	return time_wash == 0;
}

int CarWash::getProfit()
{
	return profit_per_day;
}
