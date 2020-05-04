#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 1000;
		cout << arr[i]<<"\t";
	}
	cout << endl;
	
	for (int j = 0; j < 10; j++)
	{
		if (1 == ((arr[j])%2))
			cout << "No " << "\t";
		else if(arr[j] == 0)
			cout << "Null " << "\t";
		else
			cout << "Yes "  << "\t";
	}

	system("pause");
	return 0;
}
