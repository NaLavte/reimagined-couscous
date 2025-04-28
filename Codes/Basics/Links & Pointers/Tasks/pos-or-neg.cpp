#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a;

	cout << "Введите любой число: ";
	cin >> a;

	int* ptrA = &a;

	cout << (*ptrA > 0 ? "+" : (*ptrA < 0 ? "-" : "zero"));
}
