#include <iostream>

using namespace std;

//  


int riempi (int numeri[], int lunghezza) { //  questa è una recursion-e (non so come si traduce in italiano) in sostanza è una funzione che richiama la stessa funzione. essa (recusione) è composta da una parte fissa e una no (lol) praticamente è come avere un loop che senza una condizione loopera all'infinito. diciamo che sono benvenute ma non sempre, conviene usarle per rendere il codice più comprensibile. 
	
	numeri [lunghezza - 1] = lunghezza;
	lunghezza --;
	
	if (lunghezza == 0)
		return 0;
	
	else
		return riempi (numeri, lunghezza);
}


int main() {
	setlocale(LC_ALL, "italian");
	
	int numeri [10];
	
	riempi(numeri, 10);
	
	
	return 0;
}