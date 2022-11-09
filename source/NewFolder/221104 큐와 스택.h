#pragma once
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	// ť (FIFO) First In First Out
	/*
	// ���� ���� �����Ͱ� ���� ���� ������ ������ �����̳��Դϴ�.
	std::queue<int> Queue;
	// [ [10] [20] [30] ]
	// Queue.push(��) : ť �����̳ʿ� �����͸� �־��ִ� �Լ��Դϴ�.
	Queue.push(10); // [10]
	Queue.push(20);	// [10] [20]
	Queue.push(30);	// [10] [20] [30]
	int value = Queue.size();
	while (Queue.empty() == 0)
	{
		cout << Queue.front() << endl;
		Queue.pop(); // [20] [30]
	}

	// ť �����̳ʿ� �����Ͱ� �� ���� ���� front() �����
	// pop() �Լ��� ����ϰ� �Ǹ� ť ����÷ο찡 �߻��մϴ�.
	// Queue.pop() : ť �����̳ʿ��� �����͸� ������ �Լ��Դϴ�.
	// Queue.pop(); // [20] [30]
	// Queue.front() : ť �����̳ʿ� ����Ǿ� �ִ� �����߿��� ���� �տ� �ִ�
	// ���� ����ϴ� �Լ��Դϴ�.
	// cout << Queue.front() << endl;
	// Queue.size() : ť �����̳��� ũ�⸦ ����ϴ� �Լ��Դϴ�.
	cout << Queue.size() << endl;
	// Queue.Empty() : ť �����̳ʰ� ����ִ��� Ȯ���ϴ� �Լ��Դϴ�.
	cout << Queue.empty() << endl;
	*/

	// ���� (LIFO) Last In First Out
	/*
	// ���� �������� ���� �����Ͱ� ���� ���� ������ ������ �����̳��Դϴ�.
	std::stack<int> Stack;
	std::stack<int> otherStack;
	otherStack.push(-100); // -100
	otherStack.push(-200); // -200 -100
	otherStack.push(-300); // -300 -200 -100
	Stack.push(10); // 10
	Stack.push(20);	// 20 10
	Stack.push(30);	// 30 20 10
	// swap() : �� ������ ������ �ٲ� �� �ִ� �Լ��Դϴ�.
	swap(Stack, otherStack);
	// Stack.top() : ���� ���� �ִ� ���Ҹ� ����ϴ� �Լ��Դϴ�.
	cout << Stack.top() << endl;
	// Stack.pop() : ���� ���� �ִ� ���Ҹ� ���� �Լ��Դϴ�.
	Stack.pop();
	// Stack.size() : ���� �����̳ʿ� ����ִ� ũ�⸦ ��ȯ�ϴ� �Լ��Դϴ�.
	cout << Stack.size() << endl;
	*/

	int number = 0;
	int array[100] = { 0, };
	int selectNumber = 0;
	int result = 0;

	cin >> number;

	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
	}

	cin >> selectNumber;

	for (int i = 0; i < number; i++)
	{
		// �츮�� selectNumber�� �Է��� ����
		// �迭 �ȿ� �ִ� ���� ���ٸ�
		if (array[i] == selectNumber)
		{
			result++;
		}
	}

	cout << result << endl;




	return 0;
}
