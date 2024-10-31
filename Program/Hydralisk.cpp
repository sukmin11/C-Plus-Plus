#include "Hydralisk.h"

Hydralisk::Hydralisk()
{
	health = 80;
	initializeHealth = 80;
}

void Hydralisk::Recovery()
{
	health = initializeHealth;
}
