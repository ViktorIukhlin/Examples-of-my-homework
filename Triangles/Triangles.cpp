#include <iostream> 
using namespace std;

int main()
{
	cout << "Enter the number : ";
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {  
		for (int k = 0; k < number; k++) {   
			for (int j = 0; j <= (2 * number - 1); j++) {  
				if ((j <= (number + i)) && (j >= (number - i)))  
					cout << "*";
				else  
					cout << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
