#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << boolalpha;
	int i;
	cout << "Введите число" << endl;
	cin >> i;
	cout << (i < 10) << endl;
	int i1 = 1;
	int i2 = 0;
	for (int i = 0; i > 10; i--)
	{
		i2++;
		cout << "Цикл i2 = " << i2 << endl;
	}
	while (i1 < 10)
	{
		i1++;
		cout << "Цикл i1 = " << i1 << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "Цикл i = " << i << endl;
	} 
	/*if (i < 10)
	{
		cout << "ваше число меньше 10" << endl;
	}
	else
		if (i>100)
		{
			cout << "Ваше число больше 100" << endl
		}
		else {
			cout << "Ваше число меньше 100" << endl
		}
	*/
	while (i < 10)
	{
		i++;
		cout << "Цикл i =" << i << endl;
	}
}