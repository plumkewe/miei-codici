#include <iostream>

using namespace std;

//  


int riempi (int numeri[], const int lunghezza, int i) { // stessa cosa anche qui
	
	cout << "Inserisci il numero " << i + 1 << ": ";
	cin >> numeri [i];
	++ i;
	
	if (i == lunghezza)
		return 0;
	
	else
		return riempi (numeri, lunghezza, i);
}


void stampa (const int numeri[], const int lunghezza, int i) {  //  dato che questa
																//  funzione non
																//  andrà a modificare
																//  la lunghezza ed array
																//  uso const
	
	
	if (i == lunghezza)
		return;
	
	cout << numeri[i] << " ";
	i ++;
	
	stampa(numeri, lunghezza, i);
	
	
}


int main() {
	setlocale(LC_ALL, "italian");
	
	int numeri [10];
	
	riempi(numeri, 10, 0);
	stampa(numeri, 10, 0);
	
	
	return 0;
}