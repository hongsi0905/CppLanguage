#pragma once
#include <string>
#include <iostream>

// Monster �����
class Monster
{
public:
	int health;
	std::string name;
	int power;

	Monster();

	// this ������ : ��ü �ڽ��� ����Ű�� ������
	void Attack(int power);
};

