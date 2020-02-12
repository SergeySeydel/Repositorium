#include <iostream>

using namespace std;

int GlobalVariable = 245;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");

	int AutomaticVariable = 500;
	int *DynamicVariable = new int;
	*DynamicVariable = 4680;

	cout << "Адрес глобальной переменной: " <<&GlobalVariable << endl;
	cout << " Значение: " << GlobalVariable << endl;
	cout << "Адрес автоматической переменной: " << &AutomaticVariable << endl;
	cout <<" Значение: " << AutomaticVariable << endl;
	cout << "Адрес динамической переменной: " << DynamicVariable << endl;
	cout <<" Значение: " << *DynamicVariable << endl;

	delete DynamicVariable;
	return 0;
}
