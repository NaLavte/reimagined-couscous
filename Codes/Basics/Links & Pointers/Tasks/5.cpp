#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	const int size = 5;
	int array[]{ 1,2,3,4,5 };

	int* ptr = array;
	cout << *ptr;
	int sum = 0;
	
	for (int i = 0; i < size; i++) {
		sum += *(ptr + i);
	}

	cout << sum;

	return 0;
}