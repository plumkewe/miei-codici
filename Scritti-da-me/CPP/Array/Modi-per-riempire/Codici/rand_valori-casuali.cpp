#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//  riempire un array con dei valori casuali atraverso un loop e rand 


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumericasuali[10], //  creiamo un array di tipo int e con "10 elementi"
		sQuanti = sizeof(aNumericasuali)/sizeof(aNumericasuali[0]); //  troviamo quanti elementi ci sono nel array
	
	
	srand(time(NULL)); //  per valori casuali
	
	for (int i = 0; i < sQuanti; ++ i) { //  per riempire l'array con numeri casuali
		aNumericasuali[i] = rand()%10; //  % limitiamo i valori (da 0 a 10)
		
	}

	return 0;
}