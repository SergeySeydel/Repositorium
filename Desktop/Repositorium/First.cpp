#include <iostream>

using namespace std;

int GlobalVariable = 245;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");

	int AutomaticVariable = 500;
	int *DynamicVariable = new int;
	*DynamicVariable = 4680;

	cout << "����� ���������� ����������: " <<&GlobalVariable << endl;
	cout << " ��������: " << GlobalVariable << endl;
	cout << "����� �������������� ����������: " << &AutomaticVariable << endl;
	cout <<" ��������: " << AutomaticVariable << endl;
	cout << "����� ������������ ����������: " << DynamicVariable << endl;
	cout <<" ��������: " << *DynamicVariable << endl;

	delete DynamicVariable;
	return 0;
}
