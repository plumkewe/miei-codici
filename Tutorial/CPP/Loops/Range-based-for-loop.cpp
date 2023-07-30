#include <iostream>

using namespace std;

//  Range based for loops

//  Link: https://youtu.be/8qrZYjL2jBg
//  Title: C++ Programming Tutorial 58 - Range based for loops
//  Creator: Caleb Curry

//  More: https://www.geeksforgeeks.org/range-based-loop-c/amp/


int main() {
	setlocale(LC_ALL, "italian");
	
	
	int data[5] = {1, 2, 3, 4, 5}; //  tutti gli indicidi del array devono
								   //  contenere un valore! in caso contrario
								   //  il loop scrivere 0 al posto dei valori 
								   //  mancanti!
	
	
	for (int n : data) //  è uguale a: n prende il valore di data al indice n e
					   //  passa attraverso ogni casella come un postino.
		cout << n << " ";
	
	cout << endl;
		
	int data2 [5];
	int somma = 0;
	
	for (int & n : data2) { //  si possono usare per riempire un array con &
		
		//  cout << "Inserisci il " << n + 1 << " valore: "; // non funziona!
		
		cin >> n; //  funziona!
		
		somma += n; //  funziona!
	
	}
	
	for (int n : data2)
		cout << n << " ";
	
	cout << somma;
	
	return 0;
}

//  una cosa importante non si possono usare nelle funzioni e sono disponibili
//  da C++11