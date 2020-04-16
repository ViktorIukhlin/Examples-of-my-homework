#include<iostream>
#include<ctime>

using namespace std;

void main()
{
	srand(time(NULL));

	const int SIZE = 10;
	int number[SIZE];
	int bolshee = 100;

	bool YouThere;
	cout << "10 random numbers:"<<endl;

	for ( int i = 0; i < SIZE; )
	{

		YouThere = false;
		int newnumber = rand() % 100;

		for (int b=0 ; b < i; b++)
		{

			if (number[b]==newnumber)
			{
				YouThere = true;
				break;
			}

		}
		
		
		if (!YouThere)
		{
			number[i] = newnumber;
			cout << number[i]<<endl;
			i++;

		}


	}

	for ( int c = 0; c < SIZE ; c++)
	{
		
		if (bolshee > number[c])
		{
			bolshee = number[c];
		}
	}

	cout << "Smallest a number = " << bolshee<<endl;
	
	system("pause");
}

