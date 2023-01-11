#include <iostream>

using namespace std;

//  Goto

//  Link: https://youtu.be/aevwBkdG_QE
//  Title: Оператор перехода goto. Когда код становится непонятен даже создателю. Урок #22.
//  Creator: #SimpleCode

//  meglio non usarlo, lo si può sostituire con i cicli, ma a me piace.


int main() {
	setlocale(LC_ALL, "italian");
	
	cout << "Uno" << endl;
	
goto saltare;  //  non usare più di due se, evitare il loop infinito!

	cout << "Due" << endl;
	
	cout << "Tre" << endl;
	
saltare:  // è un link
	
	cout << "Quattro" << endl;
	
	cout << "Cinque" << endl;
	
	
	return 0;
}