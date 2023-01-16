#include <iostream>

using namespace std;

//  sono rari, ma esistono, hey.

//  https://www.learncpp.com/cpp-tutorial/pointers-and-const/

int main()
{
	setlocale(LC_ALL, "italian");
	
	const int limit = 500;
	
	const int * const cpci = &limit;
	
	//  non è necessario assegnare l'indirizzo di una costante a cpci
	//  possiamo utilizzare anche int
	
	int num;
//	const int * const cpci = &num;
	
	//  facento const to const non possiamo ne modificare il pointer, ne modificare il valore (data) al quale sta puntando!
	
//	cpci = &num  //  errore
//	*cpci = 25;  // errore
	
	
	return 0;
}