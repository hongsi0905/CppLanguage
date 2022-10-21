#pragma once
#include <iostream>
using namespace std;

// 깊은 복사
// 참조값이 아닌 인스턴스를 새로 복사하여 실제값을 복사하는 방법
/*
class Object
{
private:
	// m(멤버)_변수명
	int m_position;
	float m_size;
	int* m_memory;

public:
	// 얕은 복사
	// 생성자는 public
	Object(int position, float size)
	{
		m_memory = new int(10);
		m_position = position;
		m_size = size;

		cout << "memory : " << *m_memory << endl;
		cout << "position : " << m_position << endl;
		cout << "size : " << m_size << endl;
	}

	// 복사 생성자
	// 같은 클래스의 객체로부터 '복사'해서 새로운 객체를 생성하는 생성자

	// 복사 생성자에 인수로 &를 받는 이유
	// 새로운 객체를 생성할 때 생기는 오버헤드 현상을 방지하기 위해 선언

	// const : 복사된 데이터를 보호하기 위해 상수화
	Object(const Object& copyObject)
	{
		m_memory = new int(*copyObject.m_memory);
		m_position = copyObject.m_position;
		m_size = copyObject.m_size;

		cout << "memory : " << *m_memory << endl;
		cout << "position : " << m_position << endl;
		cout << "size : " << m_size << endl;

	}
	// 객체 소멸 시 동적할당한 메모리 공간을 해제
	~Object()
	{
		delete m_memory;
	}

};
*/

// 기본생성자
// 프로그래머가 정의한 생성자가 없는 경우
// 컴파일러가 자동으로 생성하는 생성자
class Book
{
public:
	int page;
	string name;

	//기본 생성자의 경우 생성자가 하나라도 선언되어 있다면 기본 생성자가 자동으로 생성되지 않음
	// Book() {}; << 생성자가 없는 기본 생성자를 생성

	Book()
	{
		cout << "생성자 호출" << endl;
	}
};
class Cover : Book
{

};


int main()
{
	// 얕은 복사
	/*
	// 값을 복사하는데 인스턴스가 메모리에 새로 생성되지 않는 형태
	// 그렇기에 값 자체를 복사하는 것이 아니라 주소값을 복사하여
	// 같은 메모리를 가리키게 하는 복사

	int* a = new int(10);
	int* b = new int(20);

	// 얕은 복사가 발생
	a = b;

	*b = 100;

	cout << "a : " << *a << endl;
	cout << "b : " << *b << endl;

	delete a;


	// 생성자에 매개변수가 있다면 클래스를 인스턴스할 때
	// 클래스에 인수를 넣어주어야한다.
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