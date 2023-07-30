#include <iostream>

using namespace std;

//  

void riempire_dd (int [][5], int);
void stampare_dd (int [][5], int);


int main() {
	setlocale(LC_ALL, "italian");
	
	int ddarray[5][5];
	
	riempire_dd (ddarray, 5);
	
	cout << "Stampo i tuoi valori inseriti: \n";
	stampare_dd (ddarray, 5);
	
	
	return 0;
}


void riempire_dd (int array[][5], int quanti) {
	
	for (int i = 0; i < quanti; ++i) {
		
		for (int j = 0; j < quanti; ++j) {
			
			cout << "Inserisci il valore per la posizione (" << i << " x " << j << "): ";
			cin >> array[i][j];
			
		}
		
	}
	
	
}


void stampare_dd (int array[][5], int quanti) {
	
	for (int i = 0; i < quanti; ++i) {
		
		for (int j = 0; j < quanti; ++j) {
			
			cout << array[i][j] << " ";
			
		}
		
		cout << '\n';
	}
	
	
}