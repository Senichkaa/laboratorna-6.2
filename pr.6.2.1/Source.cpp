
//Капанайко Арсен ІТ-11
//Варіант 9
// Лабораторна робота №6.2.1

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void CreateArr(int arr[], const int size)
{
    for (size_t i = 0;i < size;i++)
        arr[i] = -10 + rand() % 21;
}
int SumElements(int arr[], const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 != 0)
            S += i;
    return S;
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 5;
    int a[n];
    CreateArr(a, n);
    Print(a, n);
    cout << "S = " << SumElements(a, n) << endl;
    return 0;
}