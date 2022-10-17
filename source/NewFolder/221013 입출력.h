#pragma once
#include <iostream> // iostream : 입출력 스트림
// 스트림 : 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름

// auto 매개 변수로 사용할 수 없다.
/*
void Function(auto x)
{

}
*/

//클래스
class Player
{
    // 접근 지정자 : 클래스 외부에서 접근 가능 멤버(변수, 함수)와 접근이 허용되지 않는 멤버를 구분하는 지정자 
    // public : 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스 외부에서 접근을 허용할 수 있는 지정자
    // private : 클래스 내부에서만 접근이 허용되고, 자기가 상속하는 클래스와 클래스 외부에서 접근할 수 없는 지정자
    // protected : 클래스 내부와 자기가 상속하는 클래스까지만 접근을 허용하고 클래스 외부에서는 접근을 할 수 없는 지정자

    // 클래스는 접근 지정자를 해주지 않으면 기본적으로 private 설정
public:
    int health = 100;
    float size = 3.65;
    std::string name = "Korea";

    void Attack()
    {
        std::cout << "공격" << std::endl;
    }
private:
};

int main()
{
    //C++ 기본 입출력
    /*

    // std::cin : 입력하기 위한 객체
    // std::cout : 출력하기 위한 객체
    // std::endl : 문자열 개행
    // 삽입 연산자 "<<" : 출력 스트림 개체에 바이트로 보내는 연산자
    // 추출 연산자 ">>" : 입력한 데이터를 입력 스트림에서 추출하여 오른쪽에 위치한 변수에 값을 저장합니다.

    char alphabet = 'B';
    int value = 10;
    float variable = 10.5;

    std::cout << "alphabet 변수 값 : " << alphabet << std::endl;
    std::cout << "value 변수 값 : " << value << std::endl;
    std::cout << "variable 변수 값 : " << variable << std::endl;


    std::cin >> value;
    std::cout << "value 변수 값 : " << value << std::endl;


    std::cout << "안녕하세요";
    */

    // bool : 참과 거짓을 나타내는 자료형
    // bool value = true;

    // 범위 기반 for문
    /*
    // 시작과 끝점을 알려주지 않아도 데이터 크기에 따라 끝까지 순회해주는 반복문
    // 1. for문 내에서 index 정보가 존재하지 않음
    // 2. for 배열의 요소를 변경할 수 없다.

    int array[] = { 1,2,3,4,5 };
    for (int element : array)
    {
        element = 10;
        std::cout << element << std::endl;
    }

    // element : 변수 이름
    // array : 데이터 리스트 (배열, 벡터, 리스트)
    for (int element : array)
    {
        // 값을 지정된 형태로 증가시키는 것은 가능 element += 1;
        // 배열 안에 있는 값을 전체 초기화도 가능 element = 10;
        std::cout << element << std::endl;
    }
    */

    // 자료형 추론
    /*
    // 변수나 함수를 선언하고 연산이 이루어질 때 컴파일러가 자동으로 자료형을 추론해주는 기능
    // 변수를 초기화하지 않으면 사용할 수 없다.

    auto value = 10;
    auto decimal = 20.6;
    std::cout << "밸류 변수 값 : " << value << std::endl;
    */

    // 클래스
    Player kim;
    kim.Attack();
    kim.health = 100;
    kim.size = 1.7;
    kim.name = "Kor";
    std::cout << kim.health << " " << kim.size << " " << kim.name << std::endl;

    return 0;
}
