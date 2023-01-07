#include <iostream>

using namespace std;

//  Enumertation

enum gelato {
	
	caramello = 0,
	cioccolato,
	mango,
	oreo
	
} mio_preferito; //  è la stessa cosa se scrivessi nella funzione main
				 //  gelato mio_preferito;


int main() {
	setlocale(LC_ALL, "italian");
	
	mio_preferito = cioccolato;
	
	cout << "Il mio gelato preferito ha il valore di: " << mio_preferito;
	
	return 0;
}