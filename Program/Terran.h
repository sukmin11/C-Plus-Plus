#pragma once
#include <iostream>

using namespace std;

class Terran
{
protected:
	int attack;
	int defense;

public:
	// ���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ�
	// ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�, ��������
	// ����� �Լ��� ���� �Լ��� ������ �� �����ϴ�.
	virtual void Move();

	// ���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ�
	// Ŭ������ ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰��մϴ�.
};

