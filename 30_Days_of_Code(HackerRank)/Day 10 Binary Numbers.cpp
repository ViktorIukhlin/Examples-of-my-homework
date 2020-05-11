#include <iostream>
using namespace std;

int BinaryNumbers(unsigned int n) {

	int size = 0,a = n;
	for (int i = 0; i < a; ){
		a = a / 2;
		size++;}
	
	int *arr = new int [size];
	for (int i = size-1; i >= 0; i--) {
		arr[i] = (n % 2);
		n = n / 2;
	}

	int answer = 0, b = 0;

	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " " ;
	}	
	cout << endl;*/

	for (int i = 0; i < size; i++)
	{

		if (arr[i] == 0) {
		
			if (b > answer) 
				answer = b;
			
			b = 0;
		}	

		else if (arr[i] == 1) {
			b++;

			if (b >= answer) 
				answer = b;
		}
	}

	delete []arr;
	return answer;
}


int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	//cout << "The largest number of repetitions 1: " <<BinaryNumbers(n) << endl;
	cout << BinaryNumbers(n) << endl;


	return 0;
}
