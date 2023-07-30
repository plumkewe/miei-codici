#include <iostream>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/vtslSm2GA9w
//  Title: 
//  Creator: #SimpleCode

//  si utilizzano per delle strutture difici non per delle variabili.
//  con questo operatore si richede una memoria in più. memoria dinamica oltre
//  il nostro programma


int main() {
	setlocale(LC_ALL, "italian");
	
	int *pa = new int; 	//  cosi lo chreiamo, ma non si cancella da solo, occupa solo 4 byte
						//  ma immaginate aver un ciclo e richedere più memoria... che spreco!
						//  bisogna prevedere il lack di memoria cancellando, con delete
	*pa = 10;
	
	cout << *pa << endl;
	
	
	delete pa;				//  quando non ci serve più questa memoria aggintiva, la DOBBIAMO cancellare!
							//  è una keyword! serve per prevedere il memory lack!
	
	return 0;
}