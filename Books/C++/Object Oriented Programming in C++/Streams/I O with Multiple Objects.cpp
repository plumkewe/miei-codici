#include <iostream>
#include <fstream>

using namespace std;

//  

class person
{
protected:
	char name[40];
	int  age;
	
public:
	void getData()
	{
		cout << "\n  Enter name: "; cin >> name;
		cout << "  Enter age: ";   cin >> age;
	}
	
	void showData()
	{
		cout << "\nName: " << name;
		cout << "\nAge: "  << age;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	char ch;
	person pers;
	fstream file;
	
	file.open("MultipleObj.TXT", ios::app | ios::in | ios::binary);
	
	do 
	{
		cout << "Enter  person's data: ";
		pers.getData();
		
		file.write(reinterpret_cast<char*> (&pers), sizeof(pers));
		
		cout << "Enter another person (y/n)? ";
		cin  >> ch;
		
	} while (ch == 'y');
	
	file.seekg(0);
	
	file.read( reinterpret_cast<char*> (&pers), sizeof(pers));
	
	while (!file.eof())
	{
		cout << "\nPerson: ";
		pers.showData();
		file.read(reinterpret_cast<char*> (&pers), sizeof(pers));
	}
	
	return 0;
}