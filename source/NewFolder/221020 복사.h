#pragma once
#include <iostream>
using namespace std;

// ���� ����
// �������� �ƴ� �ν��Ͻ��� ���� �����Ͽ� �������� �����ϴ� ���
/*
class Object
{
private:
	// m(���)_������
	int m_position;
	float m_size;
	int* m_memory;

public:
	// ���� ����
	// �����ڴ� public
	Object(int position, float size)
	{
		m_memory = new int(10);
		m_position = position;
		m_size = size;

		cout << "memory : " << *m_memory << endl;
		cout << "position : " << m_position << endl;
		cout << "size : " << m_size << endl;
	}

	// ���� ������
	// ���� Ŭ������ ��ü�κ��� '����'�ؼ� ���ο� ��ü�� �����ϴ� ������

	// ���� �����ڿ� �μ��� &�� �޴� ����
	// ���ο� ��ü�� ������ �� ����� ������� ������ �����ϱ� ���� ����

	// const : ����� �����͸� ��ȣ�ϱ� ���� ���ȭ
	Object(const Object& copyObject)
	{
		m_memory = new int(*copyObject.m_memory);
		m_position = copyObject.m_position;
		m_size = copyObject.m_size;

		cout << "memory : " << *m_memory << endl;
		cout << "position : " << m_position << endl;
		cout << "size : " << m_size << endl;

	}
	// ��ü �Ҹ� �� �����Ҵ��� �޸� ������ ����
	~Object()
	{
		delete m_memory;
	}

};
*/

// �⺻������
// ���α׷��Ӱ� ������ �����ڰ� ���� ���
// �����Ϸ��� �ڵ����� �����ϴ� ������
class Book
{
public:
	int page;
	string name;

	//�⺻ �������� ��� �����ڰ� �ϳ��� ����Ǿ� �ִٸ� �⺻ �����ڰ� �ڵ����� �������� ����
	// Book() {}; << �����ڰ� ���� �⺻ �����ڸ� ����

	Book()
	{
		cout << "������ ȣ��" << endl;
	}
};
class Cover : Book
{

};


int main()
{
	// ���� ����
	/*
	// ���� �����ϴµ� �ν��Ͻ��� �޸𸮿� ���� �������� �ʴ� ����
	// �׷��⿡ �� ��ü�� �����ϴ� ���� �ƴ϶� �ּҰ��� �����Ͽ�
	// ���� �޸𸮸� ����Ű�� �ϴ� ����

	int* a = new int(10);
	int* b = new int(20);

	// ���� ���簡 �߻�
	a = b;

	*b = 100;

	cout << "a : " << *a << endl;
	cout << "b : " << *b << endl;

	delete a;


	// �����ڿ� �Ű������� �ִٸ� Ŭ������ �ν��Ͻ��� ��
	// Ŭ������ �μ��� �־��־���Ѵ�.
	Object cat1(10, 2.5);
	Object cat2 = cat1;

	int a = 10;
	int b = 20;
	int c = 30;

	int array[3] = { a,b,c };

	array[0] = 100;
	cout << array[0] << endl;
	cout << a << endl;
	*/

	Book book1;
	Cover cover;

	return 0;
}