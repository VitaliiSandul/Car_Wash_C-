#pragma once

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <ctime>
#include "Queue.h"
#include "Automobile.h"
#include "Car.h"
#include "Truck.h"
#include "Police.h"

enum {
	clBlack, clNavy, clGreen, clTeal, clBrown,
	clPurple, clOlive, clGray, clSilver, clBlue,
	clLime, clCyan, clRed, clMagneta, clYellow,
	clWhite
};

void SetConsoleWinSizePosition(int width = 0, int heigth = 0, short x_position = 0, short y_position = 0);
void SetConsoleColorTextBackground(unsigned short Tex = clWhite, unsigned short Bg = clBlack);
void SetConsoleCursorPosition(short x_position, short y_position);
void OpenCarWash();
void CloseCarWash();
void printPictureWaterOff();
void printPictureWater1();
void printPictureWater2();
void printPictureWater3();
void printEmptyPicture();
void printEmptyPicture2();
void PrintQueueToWash(Queue <Automobile*> q);
void PrintStatistic(int car_counter, int max, int idle_time, int profit);
void PrintStart();
void PrintEnd();

template<class T>
void printPictureAutomobile(T &obj)
{
	Car* car;
	Truck* truck;
	Police* police;

	unsigned short CoLoR;
	if (obj->getColor() == "Olive")
	{
		CoLoR = 6;
	}
	else if (obj->getColor() == "Green")
	{
		CoLoR = 2;
	}
	else if (obj->getColor() == "Brown")
	{
		CoLoR = 4;
	}
	else if (obj->getColor() == "Purple")
	{
		CoLoR = 5;
	}
	else if (obj->getColor() == "Gray")
	{
		CoLoR = 7;
	}
	else if (obj->getColor() == "Silver")
	{
		CoLoR = 8;
	}
	else if (obj->getColor() == "Blue")
	{
		CoLoR = 9;
	}
	else if (obj->getColor() == "Red")
	{
		CoLoR = 12;
	}
	else if (obj->getColor() == "Yellow")
	{
		CoLoR = 14;
	}
	else if (obj->getColor() == "Lime")
	{
		CoLoR = 10;
	}
	else
	{
		CoLoR = 15;
	}
	
	car = dynamic_cast<Car*>(obj);
	if (car)
	{
		SetConsoleColorTextBackground(CoLoR, clBlack);
		SetConsoleCursorPosition(11, 6); 	cout << "                                              " << endl;
		SetConsoleCursorPosition(11, 7); 	cout << "                                              " << endl;
		SetConsoleCursorPosition(11, 8); 	cout << "          $$$$$$$$$$$$$$$$$$$$$$$$$$          " << endl;
		SetConsoleCursorPosition(11, 9); 	cout << "         $$           $$           $$         " << endl;
		SetConsoleCursorPosition(11, 10); 	cout << "        $$          $$$$$$          $$        " << endl;
		SetConsoleCursorPosition(11, 11); 	cout << "       $$                            $$       " << endl;
		SetConsoleCursorPosition(11, 12); 	cout << "  $$$  $$                  $$$$$$    $$  $$$  " << endl;
		SetConsoleCursorPosition(11, 13); 	cout << "  $$$$$$$                 $$    $$   $$$$$$$  " << endl;
		SetConsoleCursorPosition(11, 14); 	cout << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      " << endl;
		SetConsoleCursorPosition(11, 15); 	cout << "      $$      $                $      $$      " << endl;
		SetConsoleCursorPosition(11, 16); 	cout << "     $$  $$$$$ $              $ $$$$$  $$     " << endl;
		SetConsoleCursorPosition(11, 17);  	cout << "     $  $$   $$ $     $$     $ $$   $$  $     " << endl;
		SetConsoleCursorPosition(11, 18); 	cout << "     $  $$   $$ $$$$$$$$$$$$$$ $$   $$  $     " << endl;
		SetConsoleCursorPosition(11, 19);	cout << "     $   $$$$$                  $$$$$   $     " << endl;
		SetConsoleCursorPosition(11, 20);	cout << "     $$         "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "--------------"; SetConsoleColorTextBackground(CoLoR, clBlack);	cout << "         $$     " << endl;
		SetConsoleCursorPosition(11, 21); 	cout << "     $$         "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "| " << obj->getNumber() << " |"; 	SetConsoleColorTextBackground(CoLoR, clBlack); cout << "         $$     " << endl;
		SetConsoleCursorPosition(11, 22);	cout << "     $$         "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "--------------"; SetConsoleColorTextBackground(CoLoR, clBlack);	cout << "         $$     " << endl;
		SetConsoleCursorPosition(11, 23); 	cout << "     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     " << endl;
		SetConsoleCursorPosition(11, 24); 	cout << "        $$$$$$                  $$$$$$        " << endl;
		SetConsoleCursorPosition(11, 25); 	cout << "        $$$$$$                  $$$$$$        " << endl;
		SetConsoleColorTextBackground(clWhite, clBlack);
		cout << endl;
	}

	truck = dynamic_cast<Truck*>(obj);
	if (truck)
	{
		SetConsoleColorTextBackground(CoLoR, clBlack);
		SetConsoleCursorPosition(11, 6); 	cout << "         $$                             $$    " << endl;
		SetConsoleCursorPosition(11, 7); 	cout << "        $                              $      " << endl;
		SetConsoleCursorPosition(11, 8); 	cout << "       $ $$$$$$$$$$$$$$$$$$$$$$$$$$$$ $       " << endl;
		SetConsoleCursorPosition(11, 9); 	cout << "       $$                            $$       " << endl;
		SetConsoleCursorPosition(11, 10); 	cout << " $$$$  $$                            $$  $$$$ " << endl;
		SetConsoleCursorPosition(11, 11); 	cout << " $$$$  $$                            $$  $$$$ " << endl;
		SetConsoleCursorPosition(11, 12); 	cout << " $$$$  $$                  $$$$$$    $$  $$$$ " << endl;
		SetConsoleCursorPosition(11, 13); 	cout << "   $$$$$$                 $$    $$   $$$$$$   " << endl;
		SetConsoleCursorPosition(11, 14); 	cout << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      " << endl;
		SetConsoleCursorPosition(11, 15); 	cout << "      $$ $$   $                $   $$ $$      " << endl;
		SetConsoleCursorPosition(11, 16); 	cout << "      $$  $$   $              $   $$  $$      " << endl;
		SetConsoleCursorPosition(11, 17);  	cout << "      $$   $$   $            $   $$   $$      " << endl;
		SetConsoleCursorPosition(11, 18); 	cout << "      $$    $$   $          $   $$    $$      " << endl;
		SetConsoleCursorPosition(11, 19);	cout << "      $$     $$$$$$$$$$$$$$$$$$$$     $$      " << endl;
		SetConsoleCursorPosition(11, 20);	cout << "     $$$$$$$    "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "--------------"; 	SetConsoleColorTextBackground(CoLoR, clBlack); cout << "    $$$$$$$     " << endl;
		SetConsoleCursorPosition(11, 21); 	cout << "     $$   $$    "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "| " << obj->getNumber() << " |"; 	SetConsoleColorTextBackground(CoLoR, clBlack); cout <<"    $$   $$     " << endl;
		SetConsoleCursorPosition(11, 22);	cout << "     $$   $$    "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "--------------"; 	SetConsoleColorTextBackground(CoLoR, clBlack); cout << "    $$   $$     " << endl;
		SetConsoleCursorPosition(11, 23); 	cout << "     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     " << endl;
		SetConsoleCursorPosition(11, 24); 	cout << "        $$$$$$                  $$$$$$        " << endl;
		SetConsoleCursorPosition(11, 25); 	cout << "        $$$$$$                  $$$$$$        " << endl;
		SetConsoleColorTextBackground(clWhite, clBlack);
		cout << endl;
	}

	police = dynamic_cast<Police*>(obj);
	if (police)
	{
		SetConsoleColorTextBackground(CoLoR, clBlack);
		SetConsoleCursorPosition(11, 6); 	cout << "           "; 
		SetConsoleColorTextBackground(clBlue, clBlack); cout << "$$$$$$$$"; 
		SetConsoleColorTextBackground(clRed, clBlack);  cout << "$$$$$$$$"; 
		SetConsoleColorTextBackground(clBlue, clBlack); cout << "$$$$$$$$           " << endl;
		SetConsoleColorTextBackground(CoLoR, clBlack);
		SetConsoleCursorPosition(11, 7); 	cout << "              $                $              " << endl;
		SetConsoleCursorPosition(11, 8); 	cout << "          $$$$$$$$$$$$$$$$$$$$$$$$$$          " << endl;
		SetConsoleCursorPosition(11, 9); 	cout << "         $$           $$           $$         " << endl;
		SetConsoleCursorPosition(11, 10); 	cout << "        $$          $$$$$$          $$        " << endl;
		SetConsoleCursorPosition(11, 11); 	cout << "       $$                            $$       " << endl;
		SetConsoleCursorPosition(11, 12); 	cout << "  $$$  $$                  $$$$$$    $$  $$$  " << endl;
		SetConsoleCursorPosition(11, 13); 	cout << "  $$$$$$$                 $$    $$   $$$$$$$  " << endl;
		SetConsoleCursorPosition(11, 14); 	cout << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      " << endl;
		SetConsoleCursorPosition(11, 15); 	cout << "      $$      $                $      $$      " << endl;
		SetConsoleCursorPosition(11, 16); 	cout << "     $$  $$$$$ $              $ $$$$$  $$     " << endl;
		SetConsoleCursorPosition(11, 17);  	cout << "     $  $$   $$ $     $$     $ $$   $$  $     " << endl;
		SetConsoleCursorPosition(11, 18); 	cout << "     $  $$   $$ $$$$$$$$$$$$$$ $$   $$  $     " << endl;
		SetConsoleCursorPosition(11, 19);	cout << "     $   $$$$$                  $$$$$   $     " << endl;
		SetConsoleCursorPosition(11, 20);	cout << "     $$         "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "--------------"; 	SetConsoleColorTextBackground(CoLoR, clBlack);  cout << "         $$     " << endl;
		SetConsoleCursorPosition(11, 21); 	cout << "     $$         "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "| " << obj->getNumber() << " |"; 	SetConsoleColorTextBackground(CoLoR, clBlack);  cout << "         $$     " << endl;
		SetConsoleCursorPosition(11, 22);	cout << "     $$         "; 	SetConsoleColorTextBackground(clWhite, clBlack); cout << "--------------"; 	SetConsoleColorTextBackground(CoLoR, clBlack); cout << "         $$     " << endl;
		SetConsoleCursorPosition(11, 23); 	cout << "     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     " << endl;
		SetConsoleCursorPosition(11, 24); 	cout << "        $$$$$$                  $$$$$$        " << endl;
		SetConsoleCursorPosition(11, 25); 	cout << "        $$$$$$                  $$$$$$        " << endl;
		SetConsoleColorTextBackground(clWhite, clBlack);
		cout << endl;
	}


}


