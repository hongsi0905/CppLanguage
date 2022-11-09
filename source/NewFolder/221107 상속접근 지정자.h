#pragma once
#include <iostream>

using namespace std;

// const �Լ�
/*
// const �Լ� ���ο��� ������ ���� ������ �� ������ �����ϴ� �Լ��Դϴ�.
class Character
{
private :
	int health;
	string name;
public:
	void SetInfo(int m_health, string m_name)
	{
		health = m_health;
		name = m_name;
	}
	void GetInfo() const
	{
		// const �Լ��� ������ �Լ� ������ ��� ������ ���� �б� ��������
		// �����ϱ� ���ؼ� ���Ǵ� ����Դϴ�.
		// health = 300;
		cout << "health�� �� : " << health << endl;
		cout << "name�� �� : " << name << endl;
	}
};
*/

// final 
/*
// �� �̻� Ŭ������ �����Լ��� ��ӹ��� �ʰ� �������� �� ������
// �������ִ� Ű�����Դϴ�.
class A
{
public:
	void FunctionA()
	{
		cout << "A�� �Լ��Դϴ�." << endl;
	}
	virtual void FunctionB1()
	{
		cout << "A Ŭ�������� ȣ���� B1 �Լ��Դϴ�." << endl;
	}
};
// Ŭ������ final�� �����ϰ� �Ǹ� B Ŭ���� �ؿ� �ڽ� Ŭ������
// ������ �������ϴ�.
class B : public  A
{
public :
	virtual void FunctionB()
	{
		cout << "B�� �Լ��Դϴ�." << endl;
	}
	void FunctionB1() final
	{
		cout << "B Ŭ�������� ȣ���� B1�� �Լ��Դϴ�." << endl;
	}
};
class C	: public B
{
	void FunctionB()
	{
		cout << "C Ŭ�������� ȣ���� B�� �Լ��Դϴ�. " << endl;
	}
	// FunctionB1 �Լ��� B Ŭ�������� final�� �����߱� ������
	// �ڽ� Ŭ���� C���� �������� �� �����ϴ�.
	// void FunctionB1() { }
};
*/

// ����� ���� ������
/*
// ��� private, protected, public
// private : �ܺο��� ���ٸ��ϵ��� �����ϴ� �������Դϴ�.
// protected : Ŭ���� ���ο� �ڱⰡ ����ϴ� Ŭ���������� ������ ����ϴ� �������Դϴ�.
// public : �ܺο����� ������ ����ϴ� �������Դϴ�.
class CPU
{
public:
	void Count()
	{
		cout << "CPU Count" << endl;
	}
};
// ����� �� �� ���� �����ڸ� ��������� �������� ������
// �⺻ ���� ������(private)�� ����˴ϴ�.
// ��ӿ��� private ���� �����ڷ� ��ӹް� �Ǹ�
// �θ� Ŭ������ ����� �ڽ� Ŭ�������� ȣ���� �� �����ϴ�.
class ALU : public CPU
{
};
*/

// is-a ����
// is-a ����� �Ϲ����� ����� ��ü���� ������� �����Դϴ�.

// has-a ����
// ���� ���踦 �ǹ��ϸ� �� ������Ʈ(������ ��ü, �Ǵ� �κ�/��� ��ü��� �θ��ϴ�)
// �� �ٸ� ������Ʈ(composite type�̶�� �θ��ϴ�)�� "���Ѵ�(belongs to)"�� ���մϴ�.

int main()
{
	// const �Լ�
	/*
	Character character;
	character.SetInfo(99, "Į����Ÿ");
	character.GetInfo();
	*/

	// final
	/*
	C cClass;
	*/

	// ��ӿ��� ���� ������
	/*
	ALU alu;
	alu.Count();
	*/

	return 0;
}
