#pragma once
#include <iostream>

using namespace std;

class Weapon
{
protected:
	int attack;
	int intersection;

public:

#pragma region �Լ��� �������̵�
	// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ��������
	// �������Ͽ� ����ϴ� ����Դϴ�.

	void Attack();

	// �Լ��� �������̵�� ��� ���迡���� �̷������,
	// ���� Ŭ�������� �Լ��� �������� �� ���� Ŭ������
	// �Լ� ���¿� ��ġ�ؾ� �մϴ�.
#pragma endregion

};

