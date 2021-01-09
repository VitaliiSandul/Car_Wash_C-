#include "Police.h"

Police::Police() :Automobile()
{
	color = "Silver";
}

Police::~Police()
{
}

void Police::signal()
{
	PlaySound(TEXT("Police.wav"), NULL, SND_SYNC);
}