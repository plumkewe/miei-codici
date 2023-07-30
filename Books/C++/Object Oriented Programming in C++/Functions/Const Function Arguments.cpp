#include <iostream>

using namespace std;

//  

void aFunction(int& a, const int& b);


int main()
{
	setlocale(LC_ALL, "italian");
	
	int alpha = 7;
	int  beta = 11;
	
	aFunction(alpha, beta);
	
	
	return 0;
}

void aFunctions(int& a, const int& b)
{
	a = 107;
	b = 100; //  errore, non si può modificare una variabile const, si può passare anche per il valore dato che non sarà possibile modificare il valore della variabile.
}