#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a;
	int b;

	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b:";
	cin >> b;

	int *ptrA = &a;
	int *ptrB = &b;

	cout << (*ptrA > *ptrB? *ptrA: *ptrB);
}