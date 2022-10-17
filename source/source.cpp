#include <iostream>
#include <string>
using namespace std; // 전역으로 설정해줘야한다. 

// namespace : 속성을 구분할 수 있도록 유효 범위를 설정하는 영역
/*
namespace ClientA
{
	void Attack()
	{
		cout << "원거리 공격" << endl;
	}
}
// ClientA 의 이름 공간을 명시하지 않아도 사용하겠다는 의미
using namespace ClientA;

namespace ClientB
{
	void Attack()
	{
		cout << "근거리 공격" << endl;
	}
}

int value = 20; // 전역변수(데이터 영역)
*/

// 기본 매개변수 : 함수선언 시 매개변수를 선언과 동시에 초기화하는 매개변수
// 기본 매개변수는 오른쪽부터 정의해야한다.
void Function(int x = 20, int y = 30, int z = 30)
{
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}

int main()
{
	
	// 범위 지정 연산자
	/*
	// 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자

	int value = 10; // 지역변수(스택 영역)

	// 컴퓨터 언어이론 (범위규칙)
	// 전역 변수와 같은 이름의 지역 변수 선언 시 
	// 가장 가까운 범위에 존재하는 변수명을 사용하는 규칙

	cout << "value : " << value << endl;
	cout << "전역 변수 value : " << value << endl;

	Attack(); // using namespace ClientA 선언하였으므로 변수만 사용
	ClientB::Attack();
	*/

	// 기본 매개변수
	/*
	기본 매개변수에서 함수인수를 전달하지 않아도 사용이 가능하다.
	함수에 인수전달 시 매개변수의 왼쪽부터 대입한다
	Function(45,22);
	Function();
	*/

	// getline
	/*
	string name;
	// cin >> name;
	// getline(cin, name); //함수 : 표준입력을 받는  경우 Enter의 여부에 따라 입력받을 문자열을 구분
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
		cout << "점수 : " << total << endl;
	}
	
	return 0;
}