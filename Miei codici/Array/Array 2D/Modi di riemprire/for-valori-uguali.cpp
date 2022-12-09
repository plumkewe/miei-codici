#include <iostream>

using namespace std;

//  riempire un array 2D (matrice) con dei valori uguali attraverso il ciclo for


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti
	
	int aArray[10][10]; //  creiamo una matrice di tipo int e con "10 elementi + 1"

		
		for (int j = 0, k = 0; k <= 10; ++j, ++k) { //  qui si fanno scorrere entrambe le direzioni del array 
		
			aArray[j][k] = 1; //  e in ogni posizione si assegna il valore '1'

		}
	
	
	return 0;
}