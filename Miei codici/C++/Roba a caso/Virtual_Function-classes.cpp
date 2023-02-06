#include <iostream>

using namespace std;

//  

class Employee
{
public:
	virtual void goToWork ()  //  utilizziamo virtual per poter fare: emp = des; emp -> goToWork(); attraverso emp!!
	{
		cout << "Il lavoratore è andato a lavorare!" << endl;
	}
};

class Manager : public Employee
{
public:
	void goToWork ()
	{
		cout << "Manager è andato a lavorare!" << endl;
	}
};

class Designer : public Employee
{
public:
	void goToWork ()
	{
		cout << "Designer è andato a lavorare!" << endl;
	}
};

class Developer : public Employee
{
public:
	void goToWork ()
	{
		cout << "Developer è andato a lavorare!" << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "italian");
	
	Employee*  emp;
	Designer*  des = new Designer();
	Developer* dev = new Developer();
	
	emp =  des;
	emp -> goToWork();
	
	emp =  dev;
	emp -> goToWork();
	
	
	return 0;
}