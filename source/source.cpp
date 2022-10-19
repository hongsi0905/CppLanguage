#include <iostream>
using namespace std; 

// 레퍼런스 연산자
// 포인터를 이용하여 메모리 연산을 허용하지 않음

// 참조자를 사용하는 이유
void Function(int & x)
{
	x = 100;
}

// 인라인 함수
// 함수를 호출하는 대신 함수가 호출되는 위치마다
// 함수의 코드를 복사하여 전달하는 방식의 함수

class cellPhone
{
private:
	int brightness;
	int volume;

	bool power;
public:
	// 값을 접근하는 함수 (Setter)
	void SetVolume(int x)
	{
		volume = x;
	}
	// 값을 읽는 함수(Getter)
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
	// 참조자 : 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름
	/*

	// 하나의 메모리 공간에 2개의 이름이 존재하는 형태
	// 참조자는 초기화를 하지 않으면 사용할 수 없다
	// 참조자는 NULL로도 초기화 할 수 없다.
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

	// 인라인 함수
	/*
	// 함수 내 있는 내용이 간단할 때 사용
	// 함수가 여러 번 호출되는 함수일 경우 인라인 함수를 사용하면
	// 컴파일 크기가 커진다.
	// Function();
	*/

	// 객체 지향 프로그래밍
	cellPhone iPhone;
	// 여러 개의 객체들끼리 상호작용을 통해
	// 로직을 구성하는 프로그래밍 방법
	// cout << "최대 볼륨 : ";
	// iPhone.SoundVolume(2000);

	// 1. 캡슐화
	/*
		클래스의 속성(변수)과 기능(함수)를 하나로 묶은 다음
		실제 구현 내용의 일부를 내부에 감추어 은닉하는 속성
		cout << "볼륨 설정 : ";
		iPhone.SetVolume(10);
		cout << iPhone.GetVolume() << endl;
	*/

	return 0;
}