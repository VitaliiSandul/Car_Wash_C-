// Project -> Properties -> Linker -> Input -> Additional Dependencies (нажать Edit, вписать winmm.lib)   -  чтобы заработала PlaySound()

#include "WorkDay.h"

int main()
{
	SetConsoleWinSizePosition(220, 60, 10, 10);
	srand(time(NULL));
	PrintStart();
	workDay();
	PrintEnd();	
}