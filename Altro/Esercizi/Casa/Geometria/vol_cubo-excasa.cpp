#include <iostream>

using namespace std;

//  volume del cubo
//  versione 0.0, semplice. gli errori non sono previsti.


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti
	
	int iLato, sCalcolo; //  dichiaro due variabili per contenere i valori, non le inizializzazializo in questo caso è facoltativo.
	
	cout << "inserisci la lunghezza del lato del tuo cubo e io ti calcolerò il volume di esso\n" //  \n newline (vai da capo)
		 << "inserisci un numero intero e positivo: "; //  una piccola spiegazione e richiesta di ciò che dovrà inserire l'utente e ciò che riceverà
	cin >> iLato; //  utente inserisce il valore del lato necessario per fare il calcolo

	sCalcolo = iLato * iLato * iLato; //  calcolo senza HEADER aggiuntivi
	//  si potrebbe utilizzare anche pow(iLato, 3) con il HEADER cmath
	
	cout << "\n\nil volume del tuo cubo è "<< sCalcolo << " ovvero " << iLato << "^3"; //  stampa il calcolo \n\n doppio newline (vai da capo)
	
	return 0;
}

//  Scrivere un programma C++ che chieda come input la
//  lunghezza del lato di un cubo e calcoli e visualizzi il volume del cubo