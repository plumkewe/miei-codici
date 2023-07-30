#include <iostream>
#include <fstream>

using namespace std;

//  

class person 
{
protected:
	char name[70];
	short int age;
	
public:
	void getData()
	{
		cout << "Enter name: "; cin >> name;
		cout << "Enter age: ";  cin >> age;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	person p;
	p.getData();
	
	ofstream outfile("person.dat", ios::binary);
	outfile.write(reinterpret_cast<char*> (&p), sizeof(p));
	
	return 0;
}