#include "Monster.h"

Monster::Monster()
{
	std::cout << this << std::endl;
}

// Monster 구현부
void Monster::Attack(int power)
{
	// 클래스의 멤버변수와 매개변수 명이 같을 때
	// this로 명확하게 구분하여 값을 저장할 수 있다.
	this->power = power;


	std::cout << this << "객체가 " << this->power << "만큼 공격" << std::endl;
}