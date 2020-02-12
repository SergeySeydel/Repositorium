#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");

    const int ARR_SZ = 5;
    const int ARR_SZ2 = 5;
    int StaticOneArray[ARR_SZ];
    int StaticDoubleTwoArray[ARR_SZ][ARR_SZ2];

    int *DynamicArray = new int[100];
    int **DynamicTwoArray = new int*[ARR_SZ];
	for (int i = 0; i < 5; ++i)
		DynamicTwoArray[i] = new int[ARR_SZ];

	cout << "Статический одноразмерный массив:" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout <<&(StaticOneArray[i]) << " ";
	}
	cout << endl;

	cout << "Динамический :" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout <<&(DynamicArray[i]) << " ";
	}
	cout << endl;

	cout << "Статический Двухразмерный массив:" << endl;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout <<&(StaticDoubleTwoArray[i][j]) << " ";
		}
		cout << endl;
	}

	cout << "Динамический двуразмерный массив:" << endl;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout <<&(DynamicTwoArray[i][j]) << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; ++i)
	delete[] DynamicTwoArray[i];
	delete[] DynamicTwoArray;
	delete[] DynamicArray;
	return 0;
}

