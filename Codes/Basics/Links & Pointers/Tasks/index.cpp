#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a=5;
	cout << &a << endl << endl;


	int* ptr=&a;
	*ptr = 10;
	cout << *ptr << endl << endl;

	int& tik = a;
	tik = 15;
	cout << tik << endl << endl;
}