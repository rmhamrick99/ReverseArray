#include <iostream>
using namespace std;

void revValues(int[], int);

int main()
{
	const int SIZE = 5;
	int nums[SIZE] = { 1, 2, 3, 4, 5 };

	revValues(nums, SIZE);

	system("pause");
	return 0;
}

void revValues(int values[], int size)
{
	int *numbers = values;
	cout << "This is the array: \n";
	cout << *numbers << " ";
	while (numbers < &values[size - 1])
	{
		numbers++;
		cout << *numbers << " ";
	}

	cout << "\nThis is the array reversed: \n";
	cout << *numbers << " ";

	while (numbers > values)
	{
		numbers--;
		cout << *numbers << " ";
	}

}