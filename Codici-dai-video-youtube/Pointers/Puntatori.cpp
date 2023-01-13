#include <iostream>

using namespace std;

//  Pointers

//  Link: https://youtu.be/n0saIDd3H-M
//  Title: 
//  Creator: #SimpleCode

//  BASI


int main() {
	setlocale(LC_ALL, "italian");
	
	int a = 5;
	
//	int b = a; //  assegna il valore di A a B
	
	int *px = &a;	//  prendiamo l'idirizzo di A (&A prendi indirizzo di a e assegna il valore a PX)
					//  px = pointer x, giusto per avere un codice più leggibile e cet
					
//	double *pa = &a; //  non possiamo fare così, devono essere == i tipi
	
	cout <<  px << endl; //  dove si trova la variabile a (al suo valore)
	cout << *px << endl;
	
	cout << "\n------------\n" << endl;
	
	int *px2 = &a; //  più puntatori possono "puntare" alla stessa possizione, dunque valore.
	
	cout <<  px2 << endl;
	cout << *px2 << endl;
	
	cout << "\n------------\n" << endl;
	
	*px2 = 2; 	//  assegno il valore 2 attraverso il puntatore che punta alla variabile a
				//  attraverso il suo indirizzo
	cout <<   a << endl;
	cout << *px << endl; 	//  ha lo stesso valore di px2 e di a (lol puntano alla stessa variabile (indirizzo))
							//  sono dipendenti una dall'altra
	
	
	return 0;
}