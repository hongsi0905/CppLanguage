#pragma once
#include <iostream>

// ��� : ������ ���ǵǾ� �ִ� Ŭ������ ��� ��� ������ ��� �Լ��� �����޾� ����� �� �ִ� ��
// ���� Ŭ������ ����� ���� �ִ� Ŭ����
// ���� Ŭ������ ����� ���� �޴� Ŭ����
class Phone
{
public:
    // �����ڴ� �ڽ��� Ŭ���������� ����
    Phone()
    {
        std::cout << "�ڵ��� ����" << std::endl;
    }
    // �Ҹ��ڴ� �ڽ��� Ŭ������ �տ� ~�� ����Ͽ� ����
    ~Phone()
    {
        std::cout << "�ڵ��� ����" << std::endl;
    }
    std::string name;
    void Message()
    {
        std::cout << "���� ������" << std::endl;
        // ���� Ŭ������ ���� Ŭ�������� ������ �Լ��� ����� �� ����.
        // Touch();
    }

protected:
    void Call()
    {
        std::cout << "��ȭ �ɱ�" << std::endl;
    }

};

// ����ϴ¹�
// ����Ŭ������ : ����Ŭ������
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
    // C++ �����Ҵ�
    /*
    // new(�� ������ �Ҵ��� �޸� ������ ũ��)
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

    //Phone phone;                   //����
    Phone* phone = new Phone();      //��
    delete phone;

    // SmartPhone* sPhone = new SmartPhone();
    //phone->Message();
    // sPhone->Touch();

    // ���� ���ε�
    /*
        �迭�� ũ��� ������ ������ �޸� ũ�Ⱑ ����
        �迭[100]; > ���� �޸� ������ ����
        Ư�� ������ �迭�� ũ�⸦ 100�� ����ؾ� ������
        �� Ư�� ������ �Ѿ�� �� �̻� ����� �ʿ䰡 ���� ��
    */
    //���� �Ҵ��� ���� �ð��� �޸� ���� Ȯ��/���
    // ������ : Ŭ������ ��ü�� �����Ǿ��� �� ��ü�� �ʱ�ȭ�ϴ� �������� ����Ǵ� �Լ�
    // �Ҹ��� : Ŭ������ ��ü�� �Ҹ�Ǿ��� �� �ڵ����� ȣ��Ǵ� �Լ�

    return 0;
}
