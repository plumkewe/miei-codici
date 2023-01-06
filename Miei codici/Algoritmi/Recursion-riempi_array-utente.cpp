#include <iostream>

using namespace std;

//  


int riempi (int numeri[], int lunghezza, int i) {
	
	cout << "Inserisci il numero " << i + 1 << ": ";
	cin >> numeri [i];
	++ i;
	
	if (i == lunghezza)
		return 0;
	
	else
		return riempi (numeri, lunghezza, i);
}


void stampa (int numeri[], int lunghezza, int i) {
	
	
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