#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std; 
// 가상소멸자 : 가상 소멸자는 존재하지만 가상 생성자는 존재하지 않는다

class A
{
public:
	A()
	{
		cout << "A 생성" << endl;
	}
	virtual ~A()
	{
		cout << "A 제거" << endl;
	}
};
class B : public A
{
public:
	B()
	{
		cout << "B 생성" << endl;
	}
	virtual ~B()
	{
		cout << "B 제거" << endl;
	}
};

// 프렌드 : 클래스의 멤버 함수는 아니지만, 클래스에 friend 라고 선언시
// 클래스의 멤버 함수처럼 private 멤버에 접근할 수 있는 기능
class PeopleA
{
private:
	int age;
	// 프렌드 클래스 명을 선언
	
	friend void FriendInformation(PeopleA a) <- 전역 함수 선언
	{
		cout << "A 클래스 정보" << endl;
	}
	// friend 키워드는 public, private, protected
	// 어디에서든 사용가능
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
	// 가상 소멸자
	/*
	// 가상소멸자가 호출되면 상속 구조의 맨 아래에 있는 하위 클래스의
	// 소멸자가 대신 호출되면서 상위 클래스의 소멸자가 순서대로 호출
	A* av = new B();
	delete av;
	*/

	// 프렌드
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
	
	// 중복되지 않는 랜덤값
	// 배열을 생성 후 순차적으로 값 저장
	
	int array[10];
	srand(time_t(NULL));
	for (int i = 0; i < 10;i++)
	{
		array[i] = rand() % 10 +1;
		cout << array[i] << endl;
	}

	return 0;
}