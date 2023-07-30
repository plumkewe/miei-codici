#include <iostream>

using namespace std;

//  sul libro ce un immagine molto chiara


int main()
{
	setlocale(LC_ALL, "italian");
	
	const int limit = 500;
	
	const int * const cpci = &limit; 	//  questo lo salva nel 2 posto
	const int * const * pcpci; 			//  questo in terzo 
	
	cout << *cpci << endl; 		//  secondo *
	pcpci = &cpci;
	
	cout << **pcpci << endl; 	//  per accedere al terzo * *
	
	
	return 0;
}