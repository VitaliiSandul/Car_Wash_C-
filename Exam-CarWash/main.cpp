// Project -> Properties -> Linker -> Input -> Additional Dependencies (������ Edit, ������� winmm.lib)   -  ����� ���������� PlaySound()

#include "WorkDay.h"

int main()
{
	SetConsoleWinSizePosition(220, 60, 10, 10);
	srand(time(NULL));
	PrintStart();
	workDay();
	PrintEnd();	
}