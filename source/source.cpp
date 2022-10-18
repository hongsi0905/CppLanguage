#include <iostream>
 // #include "Monster.h"
using namespace std; 


int main()
{
	
	/*
	Monster monster;
	Monster monster1;
	*/

	int a;
	int b;
	int total;
	int cnt;
	int sum = 0;

	cin >> total;
	cin >> cnt;
	for (int i = 0; i < cnt;i++)
	{
		cin >> a;
		cin >> b;
		sum = sum + a * b;
	}
	if (sum == total)
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;



	return 0;
}