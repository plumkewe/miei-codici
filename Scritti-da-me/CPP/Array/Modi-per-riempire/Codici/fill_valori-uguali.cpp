#include <iostream>

using namespace std;

//  riempire un array con dei valori uguali


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumericasuali[10], //  creiamo un array di tipo int e con "10 elementi"
		sQuanti = sizeof(aNumericasuali)/sizeof(aNumericasuali[0]); //  troviamo quanti elementi ci sono nel array
	
	
	fill (aNumericasuali, aNumericasuali + sQuanti, 10); //  riempe tutti i valori nel array con il 10
	
	
	return 0;
}