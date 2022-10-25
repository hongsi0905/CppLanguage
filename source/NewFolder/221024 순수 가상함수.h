#pragma once
#include <iostream>
using namespace std;

// 함수의 오버라이딩
// 이미 정의된 함수를 무시하고 같은 함수명을 새롭게 정의
class Parent
{
public:
	virtual void Talk()
	{
		cout << "Parent 클래스 Talk 함수" << endl;
	}
	void Information()
	{
		cout << "Parent 클래스" << endl;
	}
};

class Child : public Parent
{
public:
	// 오버라이딩할 때 상위 클래스의 함수명과 동일하게 만들어야함
	void Information()
	{
		cout << "Child 클래스" << endl;
	}
	void Talk()
	{
		cout << "Child 클래스 Talk 함수" << endl;
	}
};

// 상속 관계일 때 생성자와 소멸자 호출 순서
class Fruit
{
public:
	Fruit()
	{
		cout << "Fruit 클래스 생성" << endl;
	}
	~Fruit()
	{
		cout << "Fruit 클래스 소멸" << endl;

	}

};
class Apple : public Fruit
{
public:
	Apple()
	{
		cout << "Apple 클래스 생성" << endl;
	}
	~Apple()
	{
		cout << "Apple 클래스 소멸" << endl;
	}
};

// 순수 가상함수
// 선언만 있고 구현이 없는 가상함수
class Pen
{
public:
	// 순수 가상함수는 함수에 0을 넣어주고
	// 하위 클래스에서 재정의할 것으로 예상되는 함수에 대해
	// 미리 호출 계획을 세워두기 위해 정의
	virtual void Draw() = 0;
	virtual void Color() = 0;
};
class Circle : public Pen
{
public:
	// 순수 가상함수는 무조건 하위 클래스에서 재정의 필수
	void Draw()
	{
		cout << "동그라미" << endl;
	}
	void Color()
	{
		cout << "빨간색" << endl;
	}
};
class Rectangle : public Pen
{
public:
	void Draw()
	{
		cout << "네모" << endl;
	}

	void Color()
	{
		cout << "파란색" << endl;
	}
};

int main()
{
	// 가상 함수 테이블
	/*
	Parent* parent = new Parent;
	Child* child = new Child;

	parent->Talk();			// 가상 함수
	parent->Information();	// 일반 함수

	parent = child;

	// parent 포인터의 참조를 child의 메모리 공간을 가리키도록 변경

	// 가상 함수테이블
	// 함수 포인터배열이며, 이 포인터를 따라가서 가상 함수로
	// 선언된 멤버 함수들의 주소에 배열 형태로 접근하여 호출하는 테이블

	// 가상 함수테이블이 실제 호출되어야 할 함수의 위치를 저장

	parent->Talk();
	parent->Information();
	*/
	// 상속 관계일 때 생성자와 소멸자 호출 순서
	/*
	// 먼저 호출 후 다음 하위 클래스의 생성자 호출
	//
	// 소멸자는 생성자의 역순으로 호출  Last In Firt Out
	Apple apple;
	*/

	// 추상 클래스 : 일부 함수가 구현되지 않고, 선언만 되어있는 클래스
	// 추상 클래스는 객체를 생성할 수 없다

	// 상속받은 클래스에서도 순수 가상함수들을 모두 다 재정의해야만 생성
	Circle circle;
	circle.Draw();

	Rectangle rectangle;
	rectangle.Draw();
	return 0;
}