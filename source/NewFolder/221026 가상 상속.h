#pragma once
#include <iostream>
using namespace std;
// 다중 상속
// 어떤 클래스가 하나 이상의 상위 클래스로부터 여러가지 행동이나 특징을
// 상속받을 수 있는 상속

class Keyboard
{
public:
	Keyboard()
	{
		cout << "키보드 호출" << endl;
	}
	void Input()
	{
		cout << "키보드 입력" << endl;
	}
	char key;
};
class Mouse
{
public:
	Mouse()
	{
		cout << "마우스 호출" << endl;
	}

	void Input()
	{
		cout << "마우스 입력" << endl;
	}
	int sensor;
};
class Computer : public Keyboard, public Mouse
{
public:
	Computer(char _key, int _sensor)
	{
		Keyboard::key = _key;
		Mouse::sensor = _sensor;

		cout << Keyboard::key << endl;
		cout << Mouse::sensor << endl;
	}
};

// 다이아몬드 상속
class A
{
public:
	A()
	{
		cout << "A클 호출" << endl;
	}
};
class B : virtual public A
{
public:
	B()
	{
		cout << "B클 호출" << endl;
	}
};
class C : virtual public A
{
public:
	C()
	{
		cout << "C클 호출" << endl;
	}
};
class D : public B, public C
{
public:
	D()
	{
		cout << "D클 호출" << endl;
	}
};


int main()
{
	// 다중상속
	/*
	// 다중 상속일 때 같은 명의 함수를 사용하려면 클래스를 명시하고
	// 범위 지정 연산자를 사용하여 함수 호출
	Computer computer('A', 40);
	computer.Keyboard::Input();
	*/

	// 다이아몬드 상속
	/*
	// 하나의 자식 클래스가 상속받는 서로 다른 부모 클래스들이
	// 같은 조부모 클래스를 상속받는 구조
	D d;
	*/

	// 나머지
	int array[10] = { 0, };
	int result = 0;
	int input = 0;

	for (int i = 0;i < 10;i++)
	{
		cin >> input;
		array[i] = input % 42;
	}
	for (int i = 0; i <= 9; i++)
	{
		int count = 0;
	}

	return 0;
}