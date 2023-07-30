#include <iostream>
#include <fstream>

using namespace std;

//  

class person
{
protected:
	char name[40];
	int age;
	
public:
	void getData()
	{
		cout << "\n   Enter name: "; cin >> name;
		cout << "   Enter age: ";    cin >> age;
	}
	
	void showData()
	{
		cout << "\n  Name: " << name;
		cout << "\n  Age: "  << age;
	}
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	person pers;
	ifstream infile;
	infile.open("MultipleObj.TXT", ios::in | ios::binary);
	
	infile.seekg(0, ios::end);
	int endposition = infile.tellg();
	int n = endposition / sizeof(person);
	cout << "\nThere are " << n << " persons in file";
	
	cout << "\nEnter person number: ";
	cin  >> n;
	
	int position = (n-1) * sizeof(person);
	infile.seekg(position);
	
	infile.read( reinterpret_cast<char*> (&pers), sizeof(pers) );
	pers.showData();
	
	
	return 0;
}