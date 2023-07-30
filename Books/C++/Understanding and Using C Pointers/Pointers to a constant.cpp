#include <iostream>

using namespace std;

//  questa parte non l'ho capita un granchè
//  https://www.learncpp.com/cpp-tutorial/pointers-and-const/ è chiaro

//  pcn che è un pointer ad una const int vuol dire:
//  pcn può puntare ad un'altra const int
//  pcn può puntare ad un'altro int non cons
//  pcn può essere dereferenced (*) per leggere e basta
//  pcn non può essere dereferenced (*) per modificare ciò a che sta puntando


int main()
{
	setlocale(LC_ALL, "italian");
	
	int num = 5;
	const int limit = 500; //  scrivere const int o int const non cambia niente :)
	int *pn;
	const int *pcn;
	
	pn	= &num;
	pcn	= &limit;
	
	cout << "Indirizzo di num: " << &num << " il suo valore: " << num << endl; //  & indirizzo, num valore!
	
	cout << "Indirizzo di limit: " << &limit << " il suo valore: " << limit << endl;
	
	cout << "Indirizzo di pn: " << &pn << " il suo valore: " << pn << endl;
	
	cout << "Indirizzo di pcn: " << &pcn << " il suo valore: " << pcn << endl;
	
	
	pcn = &num;  //  possiamo farlo per leggere, non possiamo cambiare il suo valore come nella R38
	
	cout << pcn << '\t' << *pcn << endl;
	
//	*pcn = 200;  //  mon possiamo farlo attraverso dereferencing si può sempre modificare il valore attraverso la variabile stessa, solo che non lo si puó fare attraverso un pointer dato che sta puntando ad una variabile const
	
	
	return 0;
}