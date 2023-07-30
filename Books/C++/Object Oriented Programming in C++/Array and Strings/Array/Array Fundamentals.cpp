#include <iostream>

using namespace std;

//  array può mantenere solo i valori dello steso tipo
//  attraverso indice si accede ad un valore


int main()
{
	setlocale(LC_ALL, "italian");
	
//	v type   v name   v size
	int      age      [4];  //  un array di tipo int con il nome age che contiene 4 elementi 0 1 2 3
	
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter an age: ";
		cin  >>  age[i]; //  <  accesso al array index
	}
	
	for (int indice : age)
		cout << "You entered " << indice << endl;
	
	
	return 0;
}