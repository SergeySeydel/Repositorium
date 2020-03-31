#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");

    const int ARR_SZ = 5;
    const int ARR_SZ2 = 5;
    const int ARR_SIZE = 100;
    const int val = 5;
    int StaticOneArray[ARR_SZ];
    int StaticDoubleTwoArray[ARR_SZ][ARR_SZ2];

    int *DynamicArray = new int[ARR_SIZE];
    int **DynamicTwoArray = new int*[ARR_SZ];
	for (int i = 0; i < val; ++i)
		DynamicTwoArray[i] = new int[ARR_SZ];

	cout << "Статический одноразмерный массив:" << endl;
	for (int i = 0; i < val; ++i)
	{
		cout <<&(StaticOneArray[i]) << " ";
	}
	cout << endl;

	cout << "Динамический :" << endl;
	for (int i = 0; i < val; ++i)
	{
		cout <<&(DynamicArray[i]) << " ";
	}
	cout << endl;

	cout << "Статический двуразмерный массив:" << endl;
	for (int i = 0; i < val; ++i)
	{
		for (int j = 0; j < val; ++j)
		{
			cout <<&(StaticDoubleTwoArray[i][j]) << " ";
		}
		cout << endl;
	}

	cout << "Динамический двуразмерный массив:" << endl;
	for (int i = 0; i < val; ++i)
	{
		for (int j = 0; j < val; ++j)
		{
			cout <<&(DynamicTwoArray[i][j]) << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < val; ++i)
	delete[] DynamicTwoArray[i];
	delete[] DynamicTwoArray;
	delete[] DynamicArray;
	return 0;
}

