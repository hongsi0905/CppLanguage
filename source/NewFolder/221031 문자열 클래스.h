#pragma once
include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	// std::string 
#pragma region ���ڿ� ���� ����
	/*
	string name = "KimGeumSoo";
	string * name1 = new string(name);
	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;
	// append : string ��ü�� ���� ���� �ִ� �޸𸮿�
	// �����͸� �߰��մϴ�.
	name.append("11");
	delete name1;
	// nullptr Null �����Ͷ�?
	// �� �̻� �ƹ� ��ġ�� �������� �ʴ� �������Դϴ�.
	name1 = nullptr;
	if (name1 == nullptr)
	{
		name1 = new string("�ȳ��ϼ���.");
	}
	// ������ ����
	// ���� ����
	// 10 / 2 (������)
	// 10 *	0.5 (����) <- ����ȭ�� ����� ȿ������ �����Դϴ�.
	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;
	*/
#pragma endregion

	// ���� ����
	/*
	// ���� 1 byte
	// �ѱ� 2 byte
	// Ư����ȣ 3 byte
	vector<string> data = {"��","��","��","��","��"};
	// vector�� ���Ұ� ������� true�� ��ȯ�մϴ�.
	// vector�� ���Ұ� �ִٸ� false�� ��ȯ�մϴ�.
	// resize : vector �޸��� ũ�⸦ �����մϴ�.
	//data.resize(10);
	// size()
	// ������ ������ ������ ��ȯ�մϴ�.
	//cout << data.size() << endl;
	// capacity()
	// �Ҵ�� �޸� ������ ũ�⸦ ��ȯ�մϴ�.
	// ���� �Ҵ��� ������ ���� Ŀ���鼭 capacity�� �Ҵ��ϰ� �˴ϴ�.
	// ���� �޸��� 1.5�踦 ������Ű�� �˴ϴ�.
	// �̷��� �޸𸮸� �Ҵ� ������ push_back�� �Ͼ ������ �����Ҵ��� �ϰ� �Ǹ�
	// ��ȿ�����̱� ������ �̸� ���ص� ��ŭ �����Ҵ��� �ѹ��� �ϴ� ���Դϴ�.
	// cout << data.capacity() << endl;
	int key = 0;
	int life = 5;
	while (!data.empty())
	{
		// [0] [1] [2] [3]
		// "��","��","��","��"
		cout << "���� ��� : " << life << endl;
		for (string element : data)
		{
			cout << element << " ";
		}
		if (_kbhit())
		{
			key = _getch();
			switch (key)
			{
			case 72 : // �� UP
				if (data.back() == "��")
					data.pop_back();
				else
					life--;
				break;
			case 75 : // �� Left
				if (data.back() == "��")
					data.pop_back();
				else
					life--;
				break;
			case 77 : // �� Right
				if (data.back() == "��")
					data.pop_back();
				else
					life--;
				break;
			case 80 : // �� Donw
				if (data.back() == "��")
					data.pop_back();
				else
					life--;
				break;
			}
		}
		system("cls");
	}
	*/
}