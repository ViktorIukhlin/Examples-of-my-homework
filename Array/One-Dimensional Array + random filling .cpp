#include <iostream>
#include <ctime>
using namespace std;

void arrayfilling(int arr[],const int size)
{
	srand (time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void printarray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}


void main()
{
		const int SIZE = 10;
		int arr[SIZE];

		arrayfilling(arr,SIZE);
		printarray(arr, SIZE);

system("pause")
}
