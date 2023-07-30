#include <iostream>

using namespace std;

//  Riferimento

//  Link: https://youtu.be/hZOX-LlUETE
//  Title: 
//  Creator: #SimpleCode

//  Sono utili nel OOP


int main() {
	setlocale(LC_ALL, "italian");
	
	int a = 5;
	
	int *pa = &a; //  è uguale a
	
	int &aRef = a; // questo
//	int &hhRef;  //  non si può fare, bisogna inizializzare immediatamente
	
	int &hhRef 	= *pa; //  si può fare
	int *ppa 	= &aRef; //  pointer che punta ad un riferimento, che ha il valore di una variabile a
	
	
	cout << "*pa \t" 	<< pa << endl;  //  questo mostra l'indirizzo (* non ce)
	cout << "&ref \t" 	<< aRef << endl; 	//  questo darà sempre il valore anceh se è in effeti un puntatore
											//  lavora sempre con i valori
	cout << "*pa \t" 	<< *pa << endl;
	
	aRef++; // aritmetica dei riferimenti
	
	cout << "&ref \t" 	<< aRef << endl; //  incrementa il valore, si lavora con i valori 
	
	aRef = 55; //  cambia il valore ad a e quindi a tutti i puntatori
	
	cout << "a\t" << a << endl;
	
	
	return 0;
}