#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a = 5;

	cout << "Значение a: " << a << endl;
	cout << "Адрес a: " << &a << endl << endl;

	int b = 10;
	cout << "Значение a: " << b << endl;
	cout << "Адрес a: " << &b << endl << endl;

}
