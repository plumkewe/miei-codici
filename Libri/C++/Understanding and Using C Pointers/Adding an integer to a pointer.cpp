#include <iostream>

using namespace std;

//  byte 	= 1 byte
//  car		= 1 byte
//  short 	= 2 byte
//  int 	= 4 byte
//  long 	= 8 byte
//  float 	= 4 byte
//  double 	= 8 byte


int main()
{
	setlocale(LC_ALL, "italian");
	
	int array[] = { 10, 20, 30 };
	
	int *pa = array;
	
	cout << "pa = " << *pa << endl;
	
	pa += 1; //  in questo modo ci spostiamo da un indice ad altro, dato che distano 4 bytes (int), il nostro indirizzo fara +4
	cout << "pa += 1 = " << *pa << endl;
	
	pa += 1; //  bisigna fare molta attenzione di non uscire fuori dalla "memoria a noi disponibile"
	cout << "pa += 1 = " << *pa << endl;
	
	
	cout << "\n--------------\n" << endl;
	
	short s;
	short *ps = &s;
	
	char c;
	char *pc = &c;
	
	cout << "Prima ps = " << ps << endl;
	
	ps += 1; // == ps = ps + 1
	cout << "Dopo ps += 1 = " << ps << endl; 	//  deve aumentare di due dato che short è di due byte
	
	cout << "Prima pc = " << pc << endl;		//  diciamo che non mi funziona probabilmente perchè sono sul mac.
	
	pc = pc + 1;
	cout << "Dopo pc += 1 = " << pc << endl; 	//  dovrebbe aumentare di uno da che char è di un byte
	
	return 0;
}