#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int ROW = 10;
	const int COLUM = 10;
	int arr[ROW][COLUM]{};

	int x, y, value = 1;

	for (int diag = 0; diag < COLUM; diag++)
	{
		if (diag % 2 == 0)
		{
			x = 0;
			y = diag;

			while (y >= 0)
			{
				arr[x][y] = value;
				value++;
				x++;
				y--;
			}
		}
		else
		{
			x = diag;
			y = 0;
			while (x >= 0)
			{
				arr[x][y] = value;
				value++;
				x -= 1;
				y += 1;
			}
		}
	}

	for (int diag = 1; diag < COLUM; diag++)
	{
		if (diag % 2 == 0)
		{
			x = 9;
			y = diag;

			while (y <= 9)
			{
				arr[x][y] = value;
				value++;
				x--;
				y++;
			}
		}
		else
		{
			x = diag;
			y = 9;
			while (x <= 9)
			{
				arr[x][y] = value;
				value++;
				x ++ ;
				y -- ;
			}
		}
	}



	for (int j = 0; j < 10; j++)
	{
		for (int g = 0; g < 10; g++)
		{
			cout << setw(4) <<arr[j][g] << " ";
		}
		cout << endl;
	}

	/*cout << arr[1][1] << endl << arr[2][2] << endl << arr[3][3] << endl << arr[4][4];*/
	system("pause");
	return 0;
}
