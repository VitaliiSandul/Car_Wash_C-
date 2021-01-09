#include "WorkDay.h"

void workDay()
{
	Queue<Automobile*> queue_cars;
	CarWash AutoWash;

	Car* b_car = nullptr;
	Truck* b_truck = nullptr;
	Police* b_police = nullptr;

	int car_counter = 0;
	int cars_in_queue = 0;
	int max = 0;
	int idle_time = 0;
	int profit = 0;

	printPictureWaterOff();
	printEmptyPicture();
	OpenCarWash();
	profit = AutoWash.getProfit();
	PrintStatistic(car_counter, max, idle_time, profit);
	Sleep(5000);
	SetConsoleCursorPosition(0, 0);

	for (int i = 0; i < 480; i++)
	{
		int chance = rand() % 100;
		if (chance >= 0 && chance < 10)
		{
			if (chance >= 0 && chance < 5)
			{
				queue_cars.push(new Car());
			}

			if (chance >= 5 && chance < 8)
			{
				queue_cars.push(new Truck());
			}

			if (chance >= 8 && chance < 10)
			{
				queue_cars.push(new Police());
			}

			car_counter++;
			cars_in_queue++;
			if (max < cars_in_queue)
				max = cars_in_queue;

			PrintStatistic(car_counter, max, idle_time, profit);
		}

		if (AutoWash.is_empty_washcar() && !queue_cars.is_empty())
		{

			printPictureWaterOff();

			b_car = dynamic_cast<Car*>(queue_cars.peek());
			if (b_car)
			{
				printEmptyPicture();
				printPictureAutomobile(b_car);
			}

			b_truck = dynamic_cast<Truck*>(queue_cars.peek());
			if (b_truck)
			{
				printEmptyPicture();
				printPictureAutomobile(b_truck);
			}

			b_police = dynamic_cast<Police*>(queue_cars.peek());
			if (b_police)
			{
				printEmptyPicture();
				printPictureAutomobile(b_police);
			}

			PrintQueueToWash(queue_cars);
			Sleep(1000);
			SetConsoleCursorPosition(0, 0);
			AutoWash.setCar(queue_cars);
			cars_in_queue--;
			profit = AutoWash.getProfit();
			PrintStatistic(car_counter, max, idle_time, profit);
		}

		if (!AutoWash.is_empty_washcar())
		{
			if (i % 4 == 0)
			{
				printPictureWaterOff();
			}
			else if (i % 4 == 1)
			{
				printPictureWater1();
			}
			else if (i % 4 == 2)
			{
				printPictureWater2();
			}
			else if (i % 4 == 3)
			{
				printPictureWater3();
			}

			if (b_car)
			{
				if (i % 2 == 0)
				{
					printEmptyPicture();
					printPictureAutomobile(b_car);
				}
				else
				{
					printEmptyPicture2();
					printPictureAutomobile(b_car);
				}
			}

			if (b_truck)
			{
				if (i % 2 == 0)
				{
					printEmptyPicture();
					printPictureAutomobile(b_truck);
				}
				else
				{
					printEmptyPicture2();
					printPictureAutomobile(b_truck);
				}
			}

			if (b_police)
			{
				if (i % 2 == 0)
				{
					printEmptyPicture();
					printPictureAutomobile(b_police);
				}
				else
				{
					printEmptyPicture2();
					printPictureAutomobile(b_police);
				}
			}

			PrintQueueToWash(queue_cars);
			Sleep(100);
			SetConsoleCursorPosition(0, 0);

			AutoWash.washCar();

			if (AutoWash.is_empty_washcar())
			{
				if (b_car)
					delete b_car;
				if (b_truck)
					delete b_truck;
				if (b_police)
					delete b_police;
			}
		}

		if (AutoWash.is_empty_washcar() && queue_cars.is_empty())
		{
			idle_time++;
			printPictureWaterOff();
			printEmptyPicture();
			PrintStatistic(car_counter, max, idle_time, profit);
			Sleep(100);
			SetConsoleCursorPosition(0, 0);
		}
	}

	printPictureWaterOff();
	printEmptyPicture();
	CloseCarWash();
	Sleep(5000);

	profit = AutoWash.getProfit();
	PrintStatistic(car_counter, max, idle_time, profit);

	if (queue_cars.getSize())
	{
		for (int i = 0; i < queue_cars.getSize(); ++i)
		{
			delete queue_cars.getItem(i);
		}
	}

	system("cls");

}
