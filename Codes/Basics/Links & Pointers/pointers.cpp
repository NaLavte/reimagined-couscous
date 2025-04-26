#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a = 5;
	int* ptr = &a;

	cout << "Адрес a: " << ptr << endl;
	cout << "Значение a: " << *ptr << endl << endl;

	*ptr = 10;
	cout << "Адрес a: " << ptr << endl;
	cout << "Значение a после изменения: " << *ptr << endl << endl;
}
