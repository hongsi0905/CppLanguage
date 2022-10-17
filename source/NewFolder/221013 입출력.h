#pragma once
#include <iostream> // iostream : ����� ��Ʈ��
// ��Ʈ�� : �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧

// auto �Ű� ������ ����� �� ����.
/*
void Function(auto x)
{

}
*/

//Ŭ����
class Player
{
    // ���� ������ : Ŭ���� �ܺο��� ���� ���� ���(����, �Լ�)�� ������ ������ �ʴ� ����� �����ϴ� ������ 
    // public : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸��� Ŭ���� �ܺο��� ������ ����� �� �ִ� ������
    // private : Ŭ���� ���ο����� ������ ���ǰ�, �ڱⰡ ����ϴ� Ŭ������ Ŭ���� �ܺο��� ������ �� ���� ������
    // protected : Ŭ���� ���ο� �ڱⰡ ����ϴ� Ŭ���������� ������ ����ϰ� Ŭ���� �ܺο����� ������ �� �� ���� ������

    // Ŭ������ ���� �����ڸ� ������ ������ �⺻������ private ����
public:
    int health = 100;
    float size = 3.65;
    std::string name = "Korea";

    void Attack()
    {
        std::cout << "����" << std::endl;
    }
private:
};

int main()
{
    //C++ �⺻ �����
    /*

    // std::cin : �Է��ϱ� ���� ��ü
    // std::cout : ����ϱ� ���� ��ü
    // std::endl : ���ڿ� ����
    // ���� ������ "<<" : ��� ��Ʈ�� ��ü�� ����Ʈ�� ������ ������
    // ���� ������ ">>" : �Է��� �����͸� �Է� ��Ʈ������ �����Ͽ� �����ʿ� ��ġ�� ������ ���� �����մϴ�.

    char alphabet = 'B';
    int value = 10;
    float variable = 10.5;

    std::cout << "alphabet ���� �� : " << alphabet << std::endl;
    std::cout << "value ���� �� : " << value << std::endl;
    std::cout << "variable ���� �� : " << variable << std::endl;


    std::cin >> value;
    std::cout << "value ���� �� : " << value << std::endl;


    std::cout << "�ȳ��ϼ���";
    */

    // bool : ���� ������ ��Ÿ���� �ڷ���
    // bool value = true;

    // ���� ��� for��
    /*
    // ���۰� ������ �˷����� �ʾƵ� ������ ũ�⿡ ���� ������ ��ȸ���ִ� �ݺ���
    // 1. for�� ������ index ������ �������� ����
    // 2. for �迭�� ��Ҹ� ������ �� ����.

    int array[] = { 1,2,3,4,5 };
    for (int element : array)
    {
        element = 10;
        std::cout << element << std::endl;
    }

    // element : ���� �̸�
    // array : ������ ����Ʈ (�迭, ����, ����Ʈ)
    for (int element : array)
    {
        // ���� ������ ���·� ������Ű�� ���� ���� element += 1;
        // �迭 �ȿ� �ִ� ���� ��ü �ʱ�ȭ�� ���� element = 10;
        std::cout << element << std::endl;
    }
    */

    // �ڷ��� �߷�
    /*
    // ������ �Լ��� �����ϰ� ������ �̷���� �� �����Ϸ��� �ڵ����� �ڷ����� �߷����ִ� ���
    // ������ �ʱ�ȭ���� ������ ����� �� ����.

    auto value = 10;
    auto decimal = 20.6;
    std::cout << "��� ���� �� : " << value << std::endl;
    */

    // Ŭ����
    Player kim;
    kim.Attack();
    kim.health = 100;
    kim.size = 1.7;
    kim.name = "Kor";
    std::cout << kim.health << " " << kim.size << " " << kim.name << std::endl;

    return 0;
}
