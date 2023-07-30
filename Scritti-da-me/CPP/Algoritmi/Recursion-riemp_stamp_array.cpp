#include <iostream>

using namespace std;

//  


int riempi (int numeri[], int lunghezza) {
	
	numeri [lunghezza] = lunghezza;
	
	if (lunghezza == 0)
		return numeri[lunghezza] = lunghezza;
	
	else
		return riempi (numeri, lunghezza - 1);
}


void stampa (int numeri[], int lunghezza, int i) {
	
	
	if (i == lunghezza + 1)
		return;
	
	cout << numeri[i] << " ";
	i ++;
	
	stampa(numeri, lunghezza, i);
	
	
}


int main() {
	setlocale(LC_ALL, "italian");
	
	int numeri [10];

	riempi(numeri, 9);
	stampa(numeri, 9, 0);
	
	
	return 0;
}