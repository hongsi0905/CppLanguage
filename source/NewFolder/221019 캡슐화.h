#pragma once
#include <iostream>
using namespace std;

// ���۷��� ������
// �����͸� �̿��Ͽ� �޸� ������ ������� ����

// �����ڸ� ����ϴ� ����
void Function(int& x)
{
	x = 100;
}

// �ζ��� �Լ�
// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ�

class cellPhone
{
private:
	int brightness;
	int volume;

	bool power;
public:
	// ���� �����ϴ� �Լ� (Setter)
	void SetVolume(int x)
	{
		volume = x;
	}
	// ���� �д� �Լ�(Getter)
	int GetVolume()
	{
		return volume;
	}

	void SoundVolume(int volumeValue)
	{
		if (volumeValue >= 100)
		{
			volumeValue = 100;
		}
		else if (volumeValue < 0)
		{
			volumeValue = 0;
		}

		volume = volumeValue;

		cout << volume << endl;
	}

};

int main()
{
	// ������ : �ڽ��� �����ϴ� ������ ����� �� �ִ� �� �ϳ��� �̸�
	/*

	// �ϳ��� �޸� ������ 2���� �̸��� �����ϴ� ����
	// �����ڴ� �ʱ�ȭ�� ���� ������ ����� �� ����
	// �����ڴ� NULL�ε� �ʱ�ȭ �� �� ����.
	int a = 10;
	int& tvalue = a;
	int& ref = tvalue;

	cout << "a : " << a << endl;
	cout << "tvalue : " << tvalue << endl;

	tvalue = 30;

	cout << "a : " << a << endl;
	cout << "tvalue : " << tvalue << endl;
	cout << "ref : " << ref << endl;

	Function(a);

	cout << a << endl;

	*/

	// �ζ��� �Լ�
	/*
	// �Լ� �� �ִ� ������ ������ �� ���
	// �Լ��� ���� �� ȣ��Ǵ� �Լ��� ��� �ζ��� �Լ��� ����ϸ�
	// ������ ũ�Ⱑ Ŀ����.
	// Function();
	*/

	// ��ü ���� ���α׷���
	cellPhone iPhone;
	// ���� ���� ��ü�鳢�� ��ȣ�ۿ��� ����
	// ������ �����ϴ� ���α׷��� ���
	// cout << "�ִ� ���� : ";
	// iPhone.SoundVolume(2000);

	// 1. ĸ��ȭ
	/*
		Ŭ������ �Ӽ�(����)�� ���(�Լ�)�� �ϳ��� ���� ����
		���� ���� ������ �Ϻθ� ���ο� ���߾� �����ϴ� �Ӽ�
		cout << "���� ���� : ";
		iPhone.SetVolume(10);
		cout << iPhone.GetVolume() << endl;
	*/

	// 

	return 0;
}