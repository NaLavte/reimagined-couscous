#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a = 312;
	int b = 1234;

	int* ptrA = &a;
	int* ptrB = &b;

	cout << *ptrA << endl;
	cout << *ptrB << endl << endl;

	for (int i = *ptrA; i == *ptrA; i++) {
		*ptrA = *ptrB;
		*ptrB = i;
		cout << *ptrA << endl;
		cout << *ptrB << endl << endl;
	}
}