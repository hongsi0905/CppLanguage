#pragma once
#include <iostream>
using namespace std;
// ���� ���
// � Ŭ������ �ϳ� �̻��� ���� Ŭ�����κ��� �������� �ൿ�̳� Ư¡��
// ��ӹ��� �� �ִ� ���

class Keyboard
{
public:
	Keyboard()
	{
		cout << "Ű���� ȣ��" << endl;
	}
	void Input()
	{
		cout << "Ű���� �Է�" << endl;
	}
	char key;
};
class Mouse
{
public:
	Mouse()
	{
		cout << "���콺 ȣ��" << endl;
	}

	void Input()
	{
		cout << "���콺 �Է�" << endl;
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

// ���̾Ƹ�� ���
class A
{
public:
	A()
	{
		cout << "AŬ ȣ��" << endl;
	}
};
class B : virtual public A
{
public:
	B()
	{
		cout << "BŬ ȣ��" << endl;
	}
};
class C : virtual public A
{
public:
	C()
	{
		cout << "CŬ ȣ��" << endl;
	}
};
class D : public B, public C
{
public:
	D()
	{
		cout << "DŬ ȣ��" << endl;
	}
};


int main()
{
	// ���߻��
	/*
	// ���� ����� �� ���� ���� �Լ��� ����Ϸ��� Ŭ������ ����ϰ�
	// ���� ���� �����ڸ� ����Ͽ� �Լ� ȣ��
	Computer computer('A', 40);
	computer.Keyboard::Input();
	*/

	// ���̾Ƹ�� ���
	/*
	// �ϳ��� �ڽ� Ŭ������ ��ӹ޴� ���� �ٸ� �θ� Ŭ��������
	// ���� ���θ� Ŭ������ ��ӹ޴� ����
	D d;
	*/

	// ������
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