#include "Brush.h"

Brush::Brush()
{
	thickness = 1.0f;
}

void Brush::Draw()
{
	cout << "���� : " << thickness << endl;
	cout << "Brush Draw" << endl;
}

Brush::~Brush()
{
	cout << "Release Brush" << endl;
}
