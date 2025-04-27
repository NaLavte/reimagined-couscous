#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int num1;
	int num2;
	int action;
	int result;
	int* ptrRes = &result;
	int* ptrAct = &action;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	cout << "Введите первое число: ";
	cin >> *ptr1;

	cout << endl << "Введите второе число: ";
	cin >> *ptr2;

	cout << "Что вы хотите сделать с этими числами:\n1. +\n2. -\n3. *\n4. /" << endl;
	cin >> *ptrAct;

	if (*ptrAct == 1) { cout << endl << *ptr1 + *ptr2; }
	else if (*ptrAct == 2) { cout << endl << "Ответ: " << *ptr1 - *ptr2; }
	else if (*ptrAct == 3) { cout << endl << "Ответ: " << *ptr1 * *ptr2; }
	else if (*ptrAct == 3) { cout << endl << "Ответ: " << *ptr1 / *ptr2; }
}