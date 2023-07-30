#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	//  Inizializzaione 
	
	int num = 5;
	int *pa = &num; // * si chiama "indirection operator", praticamente mostrerà il valore della variabile alla quale sta puntando, funziona come un decoder senza il quale non verrà mostrato il valore ma l'indirizzo dove si trova!
	
	cout << *pa << endl; //  mostrera il valore 5
	
	*pa = 200; //  dato che pa è un pointer to variabile num, possiamo usarlo come in questo caso per assegnaer un valore a num attraverso il pointer pa!
	
	cout << num << endl;
	
	
	return 0;
}