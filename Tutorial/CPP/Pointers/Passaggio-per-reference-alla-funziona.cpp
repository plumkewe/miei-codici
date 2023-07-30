#include <iostream>

using namespace std;

//  

//  Link: https://youtu.be/diXxOaEef9o
//  Title: 
//  Creator: #SimpleCode

//  

void Foo (int a)
{
	a = 1;
}

void Foo2 (int &a)
{
	a = 2;
}

void Foo3 (int *a)
{
	*a = 3;
}


int main() {
	setlocale(LC_ALL, "italian");
	
	int value = 5;
	
	
	cout << "value: " << value << endl << endl;
	
	cout << "Foo: ";
	Foo(value);
	cout << "value: " << value << endl;
	
	cout << "Foo2: ";
	Foo2(value);
	cout << "value: " << value << endl;
	
	cout << "Foo3: ";
	Foo3(&value);
	cout << "value: " << value << endl;
	
	
	return 0;
}