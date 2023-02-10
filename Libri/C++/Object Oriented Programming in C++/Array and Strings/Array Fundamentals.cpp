#include <iostream>

using namespace std;

//  array può mantenere solo i valori dello steso tipo
//  attraverso indice si accede ad un valore


int main()
{
	setlocale(LC_ALL, "italian");
	
	int age[4];
	
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter an age: ";
		cin  >>  age[i];
	}
	
	for (int indice : age)
		cout << "You entered " << indice << endl;
	
	
	return 0;
}