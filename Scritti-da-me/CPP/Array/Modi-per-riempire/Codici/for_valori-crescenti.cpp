#include <iostream>

using namespace std;

//  riempire un array con valori crescenti fino all'ultimo elemento utilizzando il ciclo for


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[11], //  creiamo un array di tipo int e con "10 + 1 elementi"
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi ci sono nel array
	
	
	for (int i = 0; i < sQuanti; ++ i) { 
		
		aNumeri[i] = i; //  verrà riempito di valori da 0 fino a 10 (compresi) 

	}

	
	return 0;
}