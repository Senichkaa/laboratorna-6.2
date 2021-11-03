//Source.cpp
//Капанайко Арсен ІТ-11
//Варіант 9
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void CreateArr(int arr[], const int size, int i)
{
	if (i < size)
	{
		arr[i] = -10 + rand() % 21;
		CreateArr(arr, size, i + 1);
		return;
	}
}
void Print(const int* const arr, const int size,int i)
{
	if (i < size)
	{
		if (i == 0)
			cout << "{";
		cout << arr[i];
		if (i != size - 1)
		{
			cout << ",";
		}
		else
		{
			cout << "}" << endl;
		}
		Print(arr, size, i + 1);
		return;
	}
}
int SumElements(int arr[], const int size, int i)
{
	if (i < size)
	{
		if (arr[i] % 2 != 0)
		{
			return i + SumElements(arr, size, i + 1);
		}
		else
		{
			return SumElements(arr, size, i + 1);
		}
	}
	else
	{
		return 0;
	}
	}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	int a[n];

	SumElements(a, n, 0);
	CreateArr(a, n,0);
	Print(a, n,0);
	cout << "S = " << SumElements(a, n,0) << endl;
	return 0;
}
