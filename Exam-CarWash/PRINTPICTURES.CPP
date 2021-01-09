#include "PrintPictures.h"

void SetConsoleWinSizePosition(int width, int heigth, short x_position, short y_position)
{
	HWND hWnd = GetForegroundWindow();

	HANDLE wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetWindowPos(hWnd, NULL, x_position, y_position, 0, 0, NULL);
	SMALL_RECT windowSize;
	windowSize.Bottom = heigth;
	windowSize.Left = 0;
	windowSize.Right = width;
	windowSize.Top = 0;
	SetConsoleWindowInfo(wHnd, TRUE, &windowSize);
	COORD bufferSize = { width + 1 , heigth + 1 };
	SetConsoleScreenBufferSize(wHnd, bufferSize);
}

void SetConsoleColorTextBackground(unsigned short Tex, unsigned short Bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Bg = Bg << 4 | Tex;
	SetConsoleTextAttribute(hConsole, Bg);
}

void SetConsoleCursorPosition(short x_position, short y_position)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD _coordPosition = { x_position , y_position };
	SetConsoleCursorPosition(hConsole, _coordPosition);
}

void OpenCarWash()
{
	SetConsoleColorTextBackground(clGreen, clBlack);
	SetConsoleCursorPosition(19, 6); cout << " ====   =====   ====   ==   ==" << endl;
	SetConsoleCursorPosition(19, 7); cout << "||  ||  ||__||  ||__   ||\\\\ ||" << endl;
	SetConsoleCursorPosition(19, 8); cout << "||  ||  ||      ||     || \\\\||" << endl;
	SetConsoleCursorPosition(19, 9); cout << " ====   ==      ====   ==   ==" << endl;
	SetConsoleColorTextBackground(clWhite, clBlack);
}

void CloseCarWash()
{
	SetConsoleColorTextBackground(clRed, clBlack);
	SetConsoleCursorPosition(18, 6); cout << " ====  ==     ====    ====  ====" << endl;
	SetConsoleCursorPosition(18, 7); cout << "||     ||    ||  ||  ||__   ||__" << endl;
	SetConsoleCursorPosition(18, 8); cout << "||     ||    ||  ||     ||  ||  " << endl;
	SetConsoleCursorPosition(18, 9); cout << " ====  ====\"  ====   ====   ====" << endl;
	SetConsoleColorTextBackground(clWhite, clBlack);
}

void printPictureWaterOff()
{
	cout << "   ==============================================================" << endl;
	cout << "   || ||         ===================================        || ||   " << endl;
	cout << "   || ||                 +        +        +                || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
}

void printPictureWater1()
{
	cout << "   ==============================================================" << endl;
	cout << "   || ||         ===================================        || ||   " << endl;
	cout << "   || ||                 +        +        +                || ||   " << endl;
	cout << "   || ||                ";
	SetConsoleColorTextBackground(clCyan, clBlack);
	cout << "/|\\      /|\\      /|\\";
	SetConsoleColorTextBackground(clWhite, clBlack);
	cout << "               || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
}

void printPictureWater2()
{
	cout << "   ==============================================================" << endl;
	cout << "   || ||         ===================================        || ||   " << endl;
	cout << "   || ||                 +        +        +                || ||   " << endl;
	cout << "   || ||                ";
	SetConsoleColorTextBackground(clCyan, clBlack);
	cout << "/|\\      /|\\      /|\\";
	SetConsoleColorTextBackground(clWhite, clBlack);
	cout << "               || ||   " << endl;
	cout << "   || ||               ";
	SetConsoleColorTextBackground(clCyan, clBlack);
	cout << "/ | \\    / | \\    / | \\";
	SetConsoleColorTextBackground(clWhite, clBlack);
	cout << "              || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
}

void printPictureWater3()
{
	cout << "   ==============================================================" << endl;
	cout << "   || ||         ===================================        || ||   " << endl;
	cout << "   || ||                 +        +        +                || ||   " << endl;
	cout << "   || ||                ";
	SetConsoleColorTextBackground(clCyan, clBlack);
	cout << "/|\\      /|\\      /|\\";
	SetConsoleColorTextBackground(clWhite, clBlack);
	cout << "               || ||   " << endl;
	cout << "   || ||               ";
	SetConsoleColorTextBackground(clCyan, clBlack);
	cout << "/ | \\    / | \\    / | \\";
	SetConsoleColorTextBackground(clWhite, clBlack);
	cout << "              || ||   " << endl;
	cout << "   || ||              ";
	SetConsoleColorTextBackground(clCyan, clBlack);
	cout << "/  |  \\  /  |  \\  /  |  \\";
	SetConsoleColorTextBackground(clWhite, clBlack);
	cout << "             || ||   " << endl;
}

void printEmptyPicture()
{
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "   || ||                                                    || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
}

void printEmptyPicture2()
{
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "\\\\=|| ||=//                                              \\\\=|| ||=//" << endl;
	cout << "//=|| ||=\\\\                                              //=|| ||=\\\\" << endl;
	cout << "   || ||                                                    || ||   " << endl;
	cout << "   || ||                                                    || ||   " << endl;
}

void PrintQueueToWash(Queue <Automobile*> q)
{
	Car* car;
	Truck* truck;
	Police* police;
	int x0 = 0, y0 = 27;

	SetConsoleCursorPosition(0, 27);
	for (int i = 0; i < (1 + q.getSize() / 5); ++i)
	{
		cout << "                                                                                                                                                                                    " << endl;
		cout << "                                                                                                                                                                                    " << endl;
		cout << "                                                                                                                                                                                    " << endl;
		cout << "                                                                                                                                                                                    " << endl;
		cout << "                                                                                                                                                                                    " << endl;
		cout << "                                                                                                                                                                                    " << endl;
	}
	SetConsoleCursorPosition(0, 27);

	for (int i = 0; i < q.getSize(); ++i)
	{
		if (q.getItem(i)->getColor() == "Olive")
		{
			SetConsoleColorTextBackground(clOlive, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Green")
		{
			SetConsoleColorTextBackground(clGreen, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Brown")
		{
			SetConsoleColorTextBackground(clBrown, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Purple")
		{
			SetConsoleColorTextBackground(clPurple, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Gray")
		{
			SetConsoleColorTextBackground(clGray, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Silver")
		{
			SetConsoleColorTextBackground(clSilver, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Blue")
		{
			SetConsoleColorTextBackground(clBlue, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Red")
		{
			SetConsoleColorTextBackground(clRed, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Yellow")
		{
			SetConsoleColorTextBackground(clYellow, clBlack);
		}
		else if (q.getItem(i)->getColor() == "Lime")
		{
			SetConsoleColorTextBackground(clLime, clBlack);
		}
		else
		{
			SetConsoleColorTextBackground(clWhite, clBlack);
		}
		car = dynamic_cast<Car*>(q.getItem(i));
		if (car)
		{
			SetConsoleCursorPosition(x0, y0);     cout << "                                  " << endl;
			SetConsoleCursorPosition(x0, y0 + 1); cout << "                                  " << endl;
			SetConsoleCursorPosition(x0, y0 + 2); cout << "        __________                " << endl;
			SetConsoleCursorPosition(x0, y0 + 3); cout << "  _____/" << q.getItem(i)->getNumber() << "\\_____          " << endl;
			SetConsoleCursorPosition(x0, y0 + 4); cout << " '-----(@)------(@)-----'         " << endl;

		}
		truck = dynamic_cast<Truck*>(q.getItem(i));
		if (truck)
		{
			SetConsoleCursorPosition(x0, y0);     cout << "       ____   __________________ " << endl;
			SetConsoleCursorPosition(x0, y0 + 1); cout << "      / |  | |                  |" << endl;
			SetConsoleCursorPosition(x0, y0 + 2); cout << "  ___/__|  |_|                  |" << endl;
			SetConsoleCursorPosition(x0, y0 + 3); cout << " o         |_|    " << q.getItem(i)->getNumber() << "    |" << endl;
			SetConsoleCursorPosition(x0, y0 + 4); cout << " '---(@)---' '-(@)(@)----(@)(@)-'" << endl;
		}

		police = dynamic_cast<Police*>(q.getItem(i));
		if (police)
		{
			SetConsoleCursorPosition(x0, y0);     cout << "                                  " << endl;
			SetConsoleCursorPosition(x0, y0 + 1); cout << "                                  " << endl;
			SetConsoleCursorPosition(x0, y0 + 2); cout << "       __*_______                 " << endl;
			SetConsoleCursorPosition(x0, y0 + 3); cout << "  ____/" << q.getItem(i)->getNumber() << "\\____            " << endl;
			SetConsoleCursorPosition(x0, y0 + 4); cout << " '---(@)---------(@)--'           " << endl;

		}
		SetConsoleColorTextBackground(clWhite, clBlack);

		if (i % 5 != 0)
		{
			x0 += 35;
		}
		else
		{
			x0 = 0;
		}
		y0 = 27 + 6 * (i / 5);
	}
}

void PrintStatistic(int car_counter, int max, int idle_time, int profit)
{
	SetConsoleColorTextBackground(clYellow, clBlack);
	SetConsoleCursorPosition(75, 6);  cout << "=======================================" << endl;
	SetConsoleCursorPosition(75, 7);  cout << "|| Cars today:              || " << right << setw(4) << car_counter << "  ||" << endl;			//количество машин за день
	SetConsoleCursorPosition(75, 8);  cout << "---------------------------------------" << endl;
	SetConsoleCursorPosition(75, 9);  cout << "|| Max queue:               || " << right << setw(4) << max << "  ||" << endl;													//максимальная величина очереди
	SetConsoleCursorPosition(75, 10); cout << "---------------------------------------" << endl;
	SetConsoleCursorPosition(75, 11); cout << "|| Time empty carwash, min: || " << right << setw(4) << idle_time << "  ||" << endl;                          //максимальное время простоя мойки за день	
	SetConsoleCursorPosition(75, 12); cout << "---------------------------------------" << endl;
	SetConsoleCursorPosition(75, 13); cout << "|| Profit today, UAH:       || " << right << setw(4) << profit << "  ||" << endl;									//максимальная величина очереди
	SetConsoleCursorPosition(75, 14); cout << "=======================================" << endl;
	SetConsoleCursorPosition(75, 15); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 16); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 17); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 18); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 19); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 20); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 21); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 22); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 23); cout << "                 || ||                 " << endl;
	SetConsoleCursorPosition(75, 24); cout << "               =========               " << endl;
	SetConsoleCursorPosition(75, 25); cout << "               =========               " << endl;
	SetConsoleColorTextBackground(clWhite, clBlack);
	SetConsoleCursorPosition(0, 0);
}


void PrintStart()
{
	const int row = 12, col = 107;

	char arr[row][col] =
	{
	  "                                                                                                          ",
	  "  **               **      ****       *********    ***     ***     ********       ***        ********     ",
	  "  **               **     ******     **********    ***     ***    *********      ******      *********    ",
	  "   **             **      **  **     **            ***     ***    **             **  **      **     **    ",
	  "   **             **     **    **    **            ***     ***    **            **    **     **     **    ",
	  "    **    ***    **      **    **     *******      ***********    **            **    **     **    **     ",
	  "    **    ***    **     **********     *******     ***********    **           **********    *******      ",
	  "     **   ***   **      **********           **    ***     ***    **           **********    ********     ",
	  "     **   ***   **      **      **           **    ***     ***    **           **      **    **     **    ",
	  "      ** ** ** **       **      **   **********    ***     ***    *********    **      **    **      **   ",
	  "      ****   ****       **      **   *********     ***     ***     ********    **      **    **       **  ",
	  "                                                                                                          ",
	};

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	for (int i = 0; i < row; ++i)
	{
		SetConsoleColorTextBackground(clWhite, clBlack);
		cout << setw(60) << "";
		SetConsoleColorTextBackground(clYellow, clBlack);
		for (int j = 0; j < col; ++j)
		{
			if (arr[i][j] == '*')
			{
				SetConsoleColorTextBackground(clYellow, clYellow);
				cout << arr[i][j];
				SetConsoleColorTextBackground(clYellow, clBlack);
			}
			else cout << arr[i][j];

			Sleep(5);
		}
		cout << endl;
	}
	SetConsoleColorTextBackground(clWhite, clBlack);


	PlaySound(TEXT("StartCarWash.wav"), NULL, SND_SYNC);
	Sleep(5000);
	system("cls");

}

void PrintEnd()
{
	system("cls");

	const int row = 12, col = 90;

	char arr[row][col] =
	{
	  "                                                                                         ",
	  "  *************   ***     ***   **********        **********   ***     ***   *********   ",
	  "  *************   ***     ***   **********        **********   ****    ***   *********** ",
	  "       ***        ***     ***   ***               ***          *****   ***   ***     *** ",
	  "       ***        ***     ***   ***               ***          ******  ***   ***     *** ",
	  "       ***        ***********   *********         *********    *** *** ***   ***     *** ",
	  "       ***        ***********   *********         *********    ***  ******   ***     *** ",
	  "       ***        ***     ***   ***               ***          ***   *****   ***     *** ",
	  "       ***        ***     ***   ***               ***          ***    ****   ***     *** ",
	  "       ***        ***     ***   **********        **********   ***     ***   *********** ",
	  "       ***        ***     ***   **********        **********   ***     ***   *********   ",
	  "                                                                                         ",
	};


	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";


	for (int i = 0; i < row; ++i)
	{
		SetConsoleColorTextBackground(clWhite, clBlack);
		cout << setw(65) << "";
		SetConsoleColorTextBackground(clYellow, clBlack);
		for (int j = 0; j < col; ++j)
		{
			if (arr[i][j] == '*')
			{
				SetConsoleColorTextBackground(clYellow, clYellow);
				cout << arr[i][j];
				SetConsoleColorTextBackground(clYellow, clBlack);
			}
			else cout << arr[i][j];

			Sleep(5);
		}
		cout << endl;
	}
	SetConsoleColorTextBackground(clWhite, clBlack);

	PlaySound(TEXT("EndCarWash.wav"), NULL, SND_SYNC);
	system("cls");
}