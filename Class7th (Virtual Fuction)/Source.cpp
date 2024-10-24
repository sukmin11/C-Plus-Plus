﻿#include <iostream>
#include "Vulture.h"
#include "SiegeTank.h"
#include "Goliath.h"

using namespace std;

enum {
	vulture = 1,
	siegetank,
	goliath,
};

int main()
{
#pragma region 가상함수
	// 상속하는 클래스 내에서 같은 형태의 함수로
	// 재정의될 수 있는 함수입니다.

	// Terran* terran = new Vulture;

	// cout << "Vulture의 크기 : " << sizeof(Vulture) << endl;

	// terran->Move();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion

#pragma region Factory
	// 1. 입력을 받습니다.

	// 2. 생성 가능한 횟수는 5번 이며,
	//    1번을 선택하면 Vulture가 생성됩니다.
	//    2번을 선택하면 SiegeTank가 생성됩니다.
	//    3번을 선택하면 Goliath이 생성됩니다.

	//    다른 번호를 입력하면 다시 입력받을 수 있도록 합니다.

	// 3. 생성된 유닛은 Move()가 호출되어서 각각의 Move()가
	//    호출될 수 있도록 합니다.

	// int input = 0;
	// int count = 0;
	// 
	// Terran* pointer = nullptr;
	// 
	// while (count < 5)
	// {
	// 	cout << "Create Unit Number : ";
	// 	cin >> input;
	// 
	// 	cout << endl;
	// 
	// 	switch (input)
	// 	{
	// 	case vulture: pointer = new Vulture();
	// 		break;
	// 	case siegetank: pointer = new SiegeTank();
	// 		break;
	// 	case goliath: pointer = new Goliath();
	// 		break;
	// 	default: continue;
	// 		break;
	// 	}
	// 
	// 	count++;
	// 
	// 	pointer->Move();
	// 
	// 	cout << endl;
	// }

#pragma endregion



	return 0;
}

