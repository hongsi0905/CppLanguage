#include "Monster.h"

Monster::Monster()
{
	std::cout << this << std::endl;
}

// Monster ������
void Monster::Attack(int power)
{
	// Ŭ������ ��������� �Ű����� ���� ���� ��
	// this�� ��Ȯ�ϰ� �����Ͽ� ���� ������ �� �ִ�.
	this->power = power;


	std::cout << this << "��ü�� " << this->power << "��ŭ ����" << std::endl;
}