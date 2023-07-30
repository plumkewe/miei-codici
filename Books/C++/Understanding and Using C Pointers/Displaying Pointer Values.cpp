#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	int num = 0;
	int *pa = &num;
	
	cout << "Indirizzo dove si trova la variabile num: " << &num << " e il suo valore " << num << endl;
	cout << "Indirizzo dove si trova il pointer pa: "    << &pa  << " e l'indirizzo al quale sta puntando " << pa << " che ha il valore di " << *pa << endl;
	
	
	return 0;
}