#include <iostream>

using namespace std;

//  riempire un array di valori di tipo int atraverso un for loop


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[10], //  creiamo un array di tipo int e con "10 elementi"
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi ci sono nel array
	
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		cin >> aNumeri[i];
		
	}
	
	return 0;
}