#pragma once
#include <iostream>
using namespace std;

class Animal
{
private: // �Ӽ�
	float weight;

public:
	// �����Լ� : ����ϴ� Ŭ���� ���� ���� �Լ��� �����ǵ� �� �ִ� �Լ�
	// ��Ģ
	// 1. public���� ����Ǿ�� �Ѵ�
	// 2. static(����)���� ����� �� ����.
	// 3. ���� �ð��� �������� �����ϱ� ���� �⺻ Ŭ������ ������/������ ���� ����
	// 4. ���� Ŭ������ ���� Ŭ������ �Լ� ���°� ����

	virtual	void Sound()
	{
		cout << "������ �Ҹ�" << endl;
	}

	void Attack()
	{
		cout << "����" << endl;
	}
};
class Cat : public Animal
{
	// ���� Ŭ������ �ִ� Sound() �Լ��� ����ϱ� ���ؼ���
	// ���� �̸����� �������־�� �Ѵ�
public:
	void Sound()
	{
		cout << "�Ŀ�" << endl;
	}
	void Attack()
	{
		cout << "�ɳ���ġ" << endl;
	}
};
class Dog : public Animal
{
public:
	void Sound()
	{
		cout << "�۸�" << endl;
	}
	void Attack()
	{
		cout << "�ڲ���" << endl;
	}
};

// �����ε� : ���� �̸��� �Լ��� ���� �� ���� �� �ִ� ���
// �Լ��� �����ε��� �Ű������� ������ Ÿ��
void Calculator(int x)
{
	cout << "int ���� : " << endl;
	cout << x << endl;
}
// �Լ��� �����ε��� ��ȯ���� ������ ���� ���� (return)

void Calculator(int x, int y)
{
	cout << "int ����" << endl;
	cout << x + y << endl;
}
void Calculator(float x, float y)
{
	cout << "float ����" << endl;
	cout << x + y << endl;
}

int main()
{
	// ������ : ��ü�� ���� ���¸� �޾Ƶ��� �� �ִ� ����
	// ��Ȳ�� ���� �ٸ� �ǹ̸� �ο��Ͽ� ����� �� �մ� �Ӽ�
	/*Animal animal;
	animal.Sound();

	Cat cat;
	cat.Sound();

	Dog dog;
	dog.Sound();*/
	// ���� �ð��� �̷�����Ѵ�

	// ���ε�
	// ���α׷� �ҽ��� ���� �̸��̳� �ĺ��� �׸��� �Լ��鿡 ����
	// �� �Ǵ� �Ӽ��� Ȯ���ϴ� ����

	// ���� ���ε�
	// ������ ������ �̷������ ���ε�
	// �������� ������ ������ �Ӽ����� ���� �Ұ���

	// ���� ���ε�
	// ����ð��� �̷������ ���ε�
	// ����ð��� �ʿ��� ��ü�� �Լ��� ȣ���� �� ������
	// �������� ���� �� �ִ�

	// �Ϲ� �Լ��� ���� ���ε����� ������ ���� ����
	/*Animal* animal = new Animal;

	animal->Sound();

	Cat* cat = new Cat;
	cat->Sound();
	animal = cat;

	cat->Sound();
	animal->Sound();*/


	// �����Լ��� ���� �ð��� ���ϴ� �Լ��� ȣ��
	Animal* ani1 = new Cat; // ���� �ð��� �����Ϸ��� �ν�
	Animal* ani2 = new Dog;


	ani1->Sound();
	ani1->Attack();

	ani1 = ani2;

	ani2->Sound();
	ani2->Attack();

	Calculator(10, 20);

	Calculator(10.5f, 16.7f);


	return 0;
}