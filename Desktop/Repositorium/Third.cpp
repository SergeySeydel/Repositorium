#include <iostream>

using namespace std;

typedef struct Building1   //������ ���������
{
	unsigned int	id;
	char			nameofbuilding[254];
	bool			shower;
	int			    apartments_quanity;
	void*			lowerflat;
	void*			upperflat;
} TypeofSmth1;

#pragma pack(push, 1)  //������ ���������, � �������������
typedef struct Building2
{
	unsigned int	id;
	char			nameofbuilding[254];
	bool			shower;
	int				apartments_quanity;
	void*			lowerflat;
	void*			upperflat;
} Building2;
#pragma pack(pop)

typedef struct Building3  //������ ���������
{
	char			nameofbuilding[254];
	void*			lowerflat;
	void*			upperflat;
	int				apartments_quanity;
	unsigned int	id;
	bool			shower;
} Building3;

void PrintSmthaboutstruct()
{
	Building1	output;
	Building2	output2;
	Building3	output3;

	cout << "���� ������ ���������: " << endl;

	cout << "����� ���� id: " <<&(output.id) << endl;
	cout << "����� ���� nameofbuilding: " <<&(output.nameofbuilding) << endl;
	cout << "����� ���� shower: " <<&(output.shower) << endl;
	cout << "����� ���� apartments_quanity: " <<&(output.apartments_quanity) << endl;
	cout << "����� ���� lowerflat: " <<&(output.lowerflat) << endl;
	cout << "����� ���� upperflat: " <<&(output.upperflat) << endl;

	cout << endl << "���� ������ ���������: " << endl;

	cout << "����� ���� id: " <<&(output2.id) << endl;
	cout << "����� ���� nameofbuilding: " <<&(output2.nameofbuilding) << endl;
	cout << "����� ���� shower: " <<&(output2.shower) << endl;
	cout << "����� ���� apartments_quanity: " <<&(output2.apartments_quanity) << endl;
	cout << "����� ���� lowerflat: " <<&(output2.lowerflat) << endl;
	cout << "����� ���� upperflat: " <<&(output2.upperflat) << endl;



	cout << endl << "���� ������� ���������" << endl;

    cout << "����� ���� id: " <<&(output3.id) << endl;
	cout << "����� ���� nameofbuilding: " <<&(output3.nameofbuilding) << endl;
	cout << "����� ���� shower: " <<&(output3.shower) << endl;
	cout << "����� ���� apartments_quanity: " <<&(output3.apartments_quanity) << endl;
	cout << "����� ���� lowerflat: " <<&(output3.lowerflat) << endl;
	cout << "����� ���� upperflat: " <<&(output3.upperflat) << endl;

	cout << endl << "������� ��������: " << endl;

	cout << "������ ������ ��������� : " << sizeof(Building1) << endl;
	unsigned int ssize =sizeof(output.id) + sizeof(output.nameofbuilding)
		+ sizeof(output.shower) + sizeof(output.lowerflat) + sizeof(output.upperflat);
	cout << "��������� ������: " << ssize << endl;

	cout << endl << "������ ������ ���������: " << endl;

	cout << "������ ������ ���������: " << sizeof(Building2) << endl;
	unsigned int summarysizeof2 = sizeof(output2.id) + sizeof(output2.nameofbuilding)
		+ sizeof(output2.shower) + sizeof(output2.lowerflat) + sizeof(output2.upperflat);
	cout << "��������� ������: " << summarysizeof2 << endl;

	cout << endl << "������ ������� ���������: " << endl;

	cout << "������ ������� ���������: " << sizeof(Building3) << endl;
	unsigned int summarysizeof3 = sizeof(output3.id) + sizeof(output3.nameofbuilding)
		+ sizeof(output3.shower) + sizeof(output3.lowerflat) + sizeof(output3.upperflat);
	cout << "��������� ������: " << summarysizeof3 << endl;
}

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");
	PrintSmthaboutstruct();
	cin.get();
	return 0;
}

