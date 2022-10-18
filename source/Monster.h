#pragma once
#include <string>
#include <iostream>

// Monster 선언부
class Monster
{
public:
	int health;
	std::string name;
	int power;

	Monster();

	// this 포인터 : 객체 자신을 가리키는 포인터
	void Attack(int power);
};

