#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
// ����Ҹ��� : ���� �Ҹ��ڴ� ���������� ���� �����ڴ� �������� �ʴ´�

class A
{
public:
	A()
	{
		cout << "A ����" << endl;
	}
	virtual ~A()
	{
		cout << "A ����" << endl;
	}
};
class B : public A
{
public:
	B()
	{
		cout << "B ����" << endl;
	}
	virtual ~B()
	{
		cout << "B ����" << endl;
	}
};

// ������ : Ŭ������ ��� �Լ��� �ƴ�����, Ŭ������ friend ��� �����
// Ŭ������ ��� �Լ�ó�� private ����� ������ �� �ִ� ���
class PeopleA
{
private:
	int age;
	// ������ Ŭ���� ���� ����

	friend void FriendInformation(PeopleA a) // <- ���� �Լ� ����
	{
		cout << "A Ŭ���� ����" << endl;
	}
	// friend Ű����� public, private, protected
	// ��𿡼��� ��밡��
	friend class PeopleB;

public:
	PeopleA(int age)
	{
		this->age = age;
	}

};
class PeopleB
{
public:
	void FriendInformation(PeopleA people)
	{
		cout << people.age << endl;
	}
};


int main()
{
	// ���� �Ҹ���
	/*
	// ����Ҹ��ڰ� ȣ��Ǹ� ��� ������ �� �Ʒ��� �ִ� ���� Ŭ������
	// �Ҹ��ڰ� ��� ȣ��Ǹ鼭 ���� Ŭ������ �Ҹ��ڰ� ������� ȣ��
	A* av = new B();
	delete av;
	*/

	// ������
	/*
	PeopleA a(10);
	Information(a);
	PeopleB b;
	b.FriendInformation(a);
	*/

	/*
	int a, b;
	cin >> a >> b;

	int n1 = a * (b % 10);
	cout << n1 << endl;

	int n2 = a * (b % 100 / 10);
	cout << n2 << endl;

	int n3 = a * (b / 100);
	cout << n3 << endl;

	cout << a * b << endl;
	*/

	// �ߺ����� �ʴ� ������
	// �迭�� ���� �� ���������� �� ����

	int array[10];
	srand(time_t(NULL));
	for (int i = 0; i < 10;i++)
	{
		array[i] = rand() % 10 + 1;
		if (array[i] == array[i + 1]) {
			i--;
		}
	}
	for (int i = 0; i < 10;i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}