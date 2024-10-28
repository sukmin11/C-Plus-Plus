#pragma once
#include "Mouse.h"
#include "KeyBoard.h"

class Computer : public KeyBoard, Mouse
{	
public:
	Computer();

	void Use();

	~Computer();
};

