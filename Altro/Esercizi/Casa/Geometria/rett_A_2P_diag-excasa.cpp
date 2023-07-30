#include <iostream>
#include <cmath> //  per la radice quadrata

using namespace std;

//  rettangolo area, perimetro e diagonale (switch)
//  versione 0.1, semplice. gli errori non sono previsti a parte il default.

int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti
	
	double iLato1, iLato2; //  dichiariazione delle due variabili per due lati (base e altezza)
	
	short int iSelezione; //  una variabile di short int per la condizione nel switch, short int non è differente da int occupa meno bit e ha anche un limito più grande (-32768 fino a 32767)
	
	cout << "Sarò in grado di calcolare l'area, il perimetro o la diagonale del tuo rettangolo... ma prima di tutto inserisci i due lati\n\n" 
		 << "inserisci il primo lato: "; //  breve spiegazione di ciò che sarà in grado di fare questo programmino e la richiesta di inserire il primo lato
	cin >> iLato1;
	
	cout << "inserisci il tuo secondo lato: ";
	cin >> iLato2; //  secondo lato
	
	
	double oArea = iLato1 * iLato2,
		   oPerimetro = (iLato1 + iLato2) * 2.0,
		   oDiagonale = (iLato1 * iLato1 + iLato2 * iLato2); //  tutte le formule, lo si fa solitamente per la comodita e legibilita, ma nulla vieta di inserirle diretamente le cout 
	
	
	cout << "\n1. [Perimetro]  2. [Area]  3. [Diagonale]\n"
		<< "Digita il numero corrispondente al calcolo: ";
	cin >> iSelezione; //  selezione 

	
	switch (iSelezione) {
		
		case 1:
			cout << "\nIl perimetro del tuo rettangolo è: " << oPerimetro;
			break;
		case 2:
			cout << "\nL'area del tuo rettangolo è: " << oArea;
			break;
		case 3:
			cout << "\nLa diagonale del tuo rettangolo è: " << sqrt(oDiagonale); //  sqrt sta per square root ovvero radice quadrata.
			break; //  parola chiave break serve per uscire dallo switch e per evitare esecuzione dei tutti case ! che vanno dal baso (3, 2 e 1)
		
		default:
			cout << "\nhmm... hai solo 3 opzioni a disposizione... riavvia il programma e riprova"; //  risposta che verrà mostrata nel caso in cui il numero inserito non è compreso nei CASE (in questo caso 1, 2 e 3) volendo lo si può mettere anche all'inzio (in quel caso bisognerà mettere anche un break proprio come nei CASE)

	}

	return 0;
}

//  Date le misure dei lati di un rettangolo a, b
//  fornite da tastiera, scrivi un programma che
//  calcoli il perimetro, l'area o la diagonale del
//  rettangolo secondo la richiesta dell'utente
//  (Supponi che l'utente possa inserire come
//  scelta: 1 = perimetro, 2 = area o 3 = diagonale)