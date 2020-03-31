#include <iostream>

using namespace std;

typedef struct Building1   //первая структура
{
	unsigned int	id;
	char			nameofbuilding[254];
	bool			shower;
	int			    apartments_quanity;
	void*			lowerflat;
	void*			upperflat;
} TypeofSmth1;

#pragmapack(push, 1)//вторая структура, с выравниванием
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

typedef struct Building3//третьяструктура
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

	cout<< "Поля первой структуры: " <<endl;

	cout << "Адрес поля id: " <<&(output.id) << endl;
	cout << "Адрес поля nameofbuilding: " <<&(output.nameofbuilding) << endl;
	cout << "Адрес поля shower: " <<&(output.shower) << endl;
	cout << "Адрес поля apartments_quanity: " <<&(output.apartments_quanity) << endl;
	cout << "Адрес поля lowerflat: " <<&(output.lowerflat) << endl;
	cout << "Адрес поля upperflat: " <<&(output.upperflat) << endl;

	cout<<endl<< "Поля второй структуры: " <<endl;
	
	cout << "Адрес поля id: " <<&(output2.id) << endl;
	cout << "Адрес поля nameofbuilding: " <<&(output2.nameofbuilding) << endl;
	cout << "Адрес поля shower: " <<&(output2.shower) << endl;
	cout << "Адрес поля apartments_quanity: " <<&(output2.apartments_quanity) << endl;
	cout << "Адрес поля lowerflat: " <<&(output2.lowerflat) << endl;
	cout << "Адрес поля upperflat: " <<&(output2.upperflat) << endl;



	cout<<endl<< "Поля третьей структуры" <<endl;

cout << "Адрес поля id: " <<&(output3.id) << endl;
	cout << "Адрес поля nameofbuilding: " <<&(output3.nameofbuilding) << endl;
	cout << "Адрес поля shower: " <<&(output3.shower) << endl;
	cout << "Адрес поля apartments_quanity: " <<&(output3.apartments_quanity) << endl;
	cout << "Адрес поля lowerflat: " <<&(output3.lowerflat) << endl;
	cout << "Адрес поля upperflat: " <<&(output3.upperflat) << endl;

	cout<<endl<< "Размеры структур: " <<endl;

	cout<< "Размер первой структуры : " <<sizeof(Building1) <<endl;
	unsigned int ssize =sizeof(output.id) + sizeof(output.nameofbuilding)
		+ sizeof(output.shower) + sizeof(output.lowerflat) + sizeof(output.upperflat);
	cout<< "Суммарный размер: " <<ssize<<endl;

	cout<<endl<< "Размер второй структуры: " <<endl;

	cout<< "Размер второй структуры: " <<sizeof(Building2) <<endl;
	unsigned int summarysizeof2 = sizeof(output2.id) + sizeof(output2.nameofbuilding)
		+ sizeof(output2.shower) + sizeof(output2.lowerflat) + sizeof(output2.upperflat);
	cout << "Суммарный размер: " << summarysizeof2 << endl;

	cout<<endl<< "Размер третьей структуры: " <<endl;

	cout<< "Размер третьей структуры: " <<sizeof(Building3) <<endl;
	unsigned int summarysizeof3 = sizeof(output3.id) + sizeof(output3.nameofbuilding)
		+ sizeof(output3.shower) + sizeof(output3.lowerflat) + sizeof(output3.upperflat);
	cout << "Суммарный размер: " << summarysizeof3 << endl;
}

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");
	PrintSmthaboutstruct();
	cin.get();
	return 0;
}
