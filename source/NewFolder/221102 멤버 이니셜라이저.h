#pragma once
#include <iostream>
using namespace std;

// ��� �̴ϼȶ�����
// �������� ������ ����Ͽ� �ʱ�ȭ�� �� �ִ� ����Դϴ�.
class Person
{
public:
	int x = 10;

	// ��� �̴ϼ� �������� ����ϸ� �ʱ�ȭ�� ����� ��Ȯ�� �ν��� �� �ֽ��ϴ�.
	// �׸��� ����� ���ÿ� �ʱ�ȭ�� �̷������ ������ ���̳ʸ� �ڵ尡 �����ǹǷ�
	// �ӵ����� �鿡���� ������ ���� �� �ֽ��ϴ�.
	/*Person(int _x, int _y) : x(_x), y(_y)
	{
		cout << "x�� �� : " << x << endl;
		cout << "y�� �� : " << y << endl;
	}*/
};

class Child : public Person
{
public:
	void ChildInfo()
	{
		cout << "Child Ŭ�����Դϴ�." << endl;
		cout << b << endl;
	}

	float b = 3.65;
};

class Child2 : public Person
{
public:
	void ChildInfo()
	{
		cout << "Child2 Ŭ�����Դϴ�." << endl;
		cout << c << endl;
	}

	int c = 5;
};

// static_cast
// �⺻ �ڷ����� ����ȯ �� ���� Ŭ�������� ���� Ŭ�������� ������ ��ȯ ���꿡
// ���Ǵ� �������Դϴ�.

// ������ ������ ����ȯ�� �����մϴ�.

// dynamic_cast
// ĳ������ ������ ��� �ּҰ��� ��ȯ�ϰ�, ������ ��� nullptr�� ��ȯ�ϴ� ĳ�����Դϴ�.

// dynamic_cast�� ������
// 1. ��ü �����Ͱ��� �� ��ȯ�� �����մϴ�.
// 2. virtual Ű���尡 �� �ϳ��� �����ϴ� ��Ӱ��迡���� �����մϴ�.

class A
{
public:
	virtual void Function()
	{
		cout << "A Ŭ����" << endl;
	}
};

class B : public A
{
public:
	void  Function()
	{
		cout << "B Ŭ����" << endl;
	}
};

int main()
{
	// ��� �̴ϼ� ������
	// Person person1(10,20);

	// static_cast
	/*
	Person * ptr1 = new Child2();
	// static_cast�� �߸��� ��Ӱ����� ����ȯ�� ������ ������� �ʽ��ϴ�.
	Child2 * cptr1 = static_cast<Child2*>(ptr1);
	cptr1->ChildInfo();
	// int value = 10;
	// static_cast�� ���ٸ� �⺻ �ڷ����� Ŭ������ ����ȯ�Ǵ� ������ �߻��մϴ�.
	// -> Child * c = (Child*)value;
	// �������� ��ȯ ������ Ÿ���� ��ȯ�մϴ�.
	// static_cast<�ٲٷ��� �ϴ� Ÿ��>(���);
	// ������ ������ ����ȯ�� ���� Ÿ�� ������ ǥ���մϴ�.
	*/

	// dynamic_cast
	A* aptr = new A();
	A* bptr = new B();
	B* bptr2 = new B();
	B* bptr3 = nullptr;

	// ������ ���� : Ÿ�Ժ�ȯ �Ұ�
	// bptr3 = aptr;

	// ������ ���� : ��Ÿ�ӿ� Ÿ�Ժ�ȯ�� �����ϸ� NULL�� ��ȯ�մϴ�.
	bptr3 = dynamic_cast<B*>(aptr);
	return 0;
}