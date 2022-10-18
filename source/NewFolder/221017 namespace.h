#pragma once
#include <iostream>
#include <string>
using namespace std; // �������� ����������Ѵ�. 

// namespace : �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� ����
/*
namespace ClientA
{
	void Attack()
	{
		cout << "���Ÿ� ����" << endl;
	}
}
// ClientA �� �̸� ������ ������� �ʾƵ� ����ϰڴٴ� �ǹ�
using namespace ClientA;

namespace ClientB
{
	void Attack()
	{
		cout << "�ٰŸ� ����" << endl;
	}
}

int value = 20; // ��������(������ ����)
*/

// �⺻ �Ű����� : �Լ����� �� �Ű������� ����� ���ÿ� �ʱ�ȭ�ϴ� �Ű�����
// �⺻ �Ű������� �����ʺ��� �����ؾ��Ѵ�.
void Function(int x = 20, int y = 30, int z = 30)
{
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}

int main()
{

	// ���� ���� ������
	/*
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� ������

	int value = 10; // ��������(���� ����)

	// ��ǻ�� ����̷� (������Ģ)
	// ���� ������ ���� �̸��� ���� ���� ���� ��
	// ���� ����� ������ �����ϴ� �������� ����ϴ� ��Ģ

	cout << "value : " << value << endl;
	cout << "���� ���� value : " << value << endl;

	Attack(); // using namespace ClientA �����Ͽ����Ƿ� ������ ���
	ClientB::Attack();
	*/

	// �⺻ �Ű�����
	/*
	�⺻ �Ű��������� �Լ��μ��� �������� �ʾƵ� ����� �����ϴ�.
	�Լ��� �μ����� �� �Ű������� ���ʺ��� �����Ѵ�
	Function(45,22);
	Function();
	*/

	// getline
	/*
	string name;
	// cin >> name;
	// getline(cin, name); //�Լ� : ǥ���Է��� �޴�  ��� Enter�� ���ο� ���� �Է¹��� ���ڿ��� ����
	cout << name;
	*/

	int test;
	char answer[50];
	int score;
	int total;

	cin >> test;
	for (int i = 0; i < test;i++)
	{
		cin >> answer;
		total = 0;
		score = 0;
		for (int j = 0; j < strlen(answer);j++)
		{
			if (answer[j] == 'O' || answer[j] == 'o')
			{
				score++;
			}
			else if (answer[j] == 'X' || answer[j] == 'x')
			{
				score = 0;
			}
			total = total + score;
		}
		cout << "���� : " << total << endl;
	}

	return 0;
}