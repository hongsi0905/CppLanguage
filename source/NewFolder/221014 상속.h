#pragma once
#include <iostream>

// 상속 : 기존에 정의되어 있는 클래스의 모든 멤버 변수와 멤버 함수를 물려받아 사용할 수 있는 것
// 상위 클래스는 상속을 물려 주는 클래스
// 하위 클래스는 상속을 물려 받는 클래스
class Phone
{
public:
    // 생성자는 자신의 클래스명으로 생성
    Phone()
    {
        std::cout << "핸드폰 생성" << std::endl;
    }
    // 소멸자는 자신의 클래스명 앞에 ~를 사용하여 생성
    ~Phone()
    {
        std::cout << "핸드폰 제거" << std::endl;
    }
    std::string name;
    void Message()
    {
        std::cout << "문자 보내기" << std::endl;
        // 상위 클래슨는 하위 클래스에서 정의한 함수를 사용할 수 없다.
        // Touch();
    }

protected:
    void Call()
    {
        std::cout << "전화 걸기" << std::endl;
    }

};

// 상속하는법
// 하위클래스명 : 상위클래스명
class SmartPhone : Phone
{
public:
    void Touch()
    {
        Call();
    }
};

int main()
{
    // C++ 동적할당
    /*
    // new(힙 영역에 할당할 메모리 공간의 크기)
    int* ptr = new int;
    *ptr = 100;

    std::cout << *ptr << std::endl;
    std::cout << ptr << std::endl;

    delete ptr;

    int* arrptr = new int[5];

    arrptr[0] = 20;
    arrptr[1] = 30;
    arrptr[2] = 40;

    for (int i = 0;i < 3;i++)
    {
        std::cout << arrptr[i] << std::endl;
    }
    */

    //Phone phone;                   //스택
    Phone* phone = new Phone();      //힙
    delete phone;

    // SmartPhone* sPhone = new SmartPhone();
    //phone->Message();
    // sPhone->Touch();

    // 정적 바인딩
    /*
        배열의 크기는 컴파일 시점에 메모리 크기가 결정
        배열[100]; > 남는 메모리 공간은 낭비
        특정 시점에 배열의 크기를 100개 사용해야 되지만
        그 특정 시점이 넘어가면 더 이상 사용할 필요가 없을 때
    */
    //동적 할당은 실행 시간에 메모리 공간 확장/축소
    // 생성자 : 클래스의 객체가 생성되었을 때 객체를 초기화하는 목적으로 실행되는 함수
    // 소멸자 : 클래스의 객체가 소멸되었을 때 자동으로 호출되는 함수

    return 0;
}
