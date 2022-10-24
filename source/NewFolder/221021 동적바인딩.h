#pragma once
#include <iostream>
using namespace std;

class Animal
{
private: // 속성
	float weight;

public:
	// 가상함수 : 상속하는 클래스 내에 같은 함수로 재정의될 수 있는 함수
	// 규칙
	// 1. public으로 선언되어야 한다
	// 2. static(정적)으로 선언될 수 없다.
	// 3. 실행 시간에 다형성을 형성하기 위해 기본 클래스의 포인터/참조를 통해 접근
	// 4. 상위 클래스와 하위 클래스의 함수 형태가 동일

	virtual	void Sound()
	{
		cout << "동물의 소리" << endl;
	}

	void Attack()
	{
		cout << "공격" << endl;
	}
};
class Cat : public Animal
{
	// 상위 클래스에 있는 Sound() 함수를 사용하기 위해서는
	// 같은 이름으로 정의해주어야 한다
public:
	void Sound()
	{
		cout << "냐옹" << endl;
	}
	void Attack()
	{
		cout << "냥냥펀치" << endl;
	}
};
class Dog : public Animal
{
public:
	void Sound()
	{
		cout << "멍멍" << endl;
	}
	void Attack()
	{
		cout << "꾹꾹이" << endl;
	}
};

// 오버로딩 : 같은 이름의 함수를 여러 개 만들 수 있는 기능
// 함수의 오버로딩은 매개변수의 갯수와 타입
void Calculator(int x)
{
	cout << "int 계산기 : " << endl;
	cout << x << endl;
}
// 함수의 오버로딩은 반환형에 영향을 받지 않음 (return)

void Calculator(int x, int y)
{
	cout << "int 계산기" << endl;
	cout << x + y << endl;
}
void Calculator(float x, float y)
{
	cout << "float 계산기" << endl;
	cout << x + y << endl;
}

int main()
{
	// 다형성 : 객체가 여러 형태를 받아들일 수 있는 성질
	// 상황에 따라 다른 의미를 부여하여 사용할 수 잇는 속성
	/*Animal animal;
	animal.Sound();

	Cat cat;
	cat.Sound();

	Dog dog;
	dog.Sound();*/
	// 실행 시간에 이루어져한다

	// 바인딩
	// 프로그램 소스에 사용된 이름이나 식별자 그리고 함수들에 대해
	// 값 또는 속성을 확정하는 과정

	// 정적 바인딩
	// 컴파일 시점에 이루어지는 바인딩
	// 컴파일이 끝나면 결정된 속성들은 변경 불가능

	// 동적 바인딩
	// 실행시간에 이루어지는 바인딩
	// 실행시간에 필요한 객체의 함수를 호출할 수 있으며
	// 유연성을 가질 수 있다

	// 일반 함수는 정적 바인딩으로 컴파일 시점 결정
	/*Animal* animal = new Animal;

	animal->Sound();

	Cat* cat = new Cat;
	cat->Sound();
	animal = cat;

	cat->Sound();
	animal->Sound();*/


	// 가상함수는 실행 시간에 원하는 함수를 호출
	Animal* ani1 = new Cat; // 실행 시간에 컴파일러가 인식
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