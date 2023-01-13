#include <iostream>

using namespace std;

//  Puntatori nelle funzioni

//  Link: https://youtu.be/EfuRJct6bhk
//  Title: 
//  Creator: #SimpleCode

//  

void Foo (int a) 	//  cosi si copia il valore trasmesso ad una nuova variabile che non si vede
{					//  al di fuori di questa funzione
	a++;
}

void Foo2 (int *pa)
{
	(*pa) ++;				//  pa++ non va bene, ricordiamo aritmetica dei puntatori, andremmo in unaltro
							//  indirizzo del puntatore (spostiamo)
}							//  le parentesi sono molto importanti dato che stabiliscono l'ordine
							//  prima otteniamo il valore e dopo lo incrementiamo

int main() {
	setlocale(LC_ALL, "italian");
	
	int a = 0;
	
	Foo(a);
	
	
	Foo2(&a);
	
	cout << a << endl;
	
	
	return 0;
}