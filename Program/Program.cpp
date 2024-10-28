﻿#include <iostream>
#include "Computer.h"

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y)
	{
#pragma region this 포인터
		// 자기 자신을 가리키는 포인터입니다.
		this->x = x;
		this->y = y;
#pragma endregion
	}

	int & X() { return x; }

	int & Y() { return y; }
};

int main()
{
#pragma region 다중 상속
	// 하나의 하위 클래스가 여러 개의 상위 클래스를
	// 상속받는 상속입니다.

	// Computer computer;
	// 
	// computer.Use();

	// 다중 상속의 경우 여러 개의 상위 클래스에 
	// 중복되는 속성이 존재할 수 있기 때문에 범위
	// 지정 연산자를 통해 상위 클래스의 이름을 
	// 선언하고 속성을 사용해야 합니다.
#pragma endregion

#pragma region 연산자 오버로딩

	Vector2 vector1(1, 1);
	Vector2 vector2(3, 3);

	// Vector2 position = vector1 + vector2;

#pragma endregion


	return 0;
}

