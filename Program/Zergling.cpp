#include "Zergling.h"

Zergling::Zergling()
{
	health = 35;
	initializeHealth = 35;
}

void Zergling::Recovery()
{
	health = initializeHealth;
}
