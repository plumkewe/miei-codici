#include <iostream>
#include <algorithm> //  per usare min_element e max_element

using namespace std;

//  Richiedi 10 numeri, e in seguito stampa il maggiore e il minore di essi.
//  Versione 0.2


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti
	
	int aNumeri[10], //  creiamo un array di tipo int e con "10 elementi"
		sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi sono nel array, ci sono tanti modi in cui lo si può fare [stackoverflow](https://stackoverflow.com/questions/4108313/how-do-i-find-the-length-of-an-array)
		
	cout << "sarò in gradi di stabilire il più grande e il più piccolo numero tra i 10 che inserirai\n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero "; //  n è la variabile che verrà incrementata di 1 ogni esecuzione del ciclo. serve solo per informare l'utente sul numero che sta inserendo. in questo caso si potrebbe anche utilizzare la variabile i con inizializzazione 1, ma è meglio evitarlo.
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			//  i serve per inserire un valore nel indice specifico, verrà incrementata dopo ogni esecuzione del ciclo, quindi assegnerà un valore a un indicie che sarà più grande di 1 del successivo.
			
			cout << "[!] Il valore devessere del tipo int, riprova "; //  messaggio per indicare che ce un errore
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}
		
	}
	
	int *oMax = max_element(begin(aNumeri), end(aNumeri)); //  assegna a oMax il valore valore trovato.
	int *oMin = min_element(begin(aNumeri), end(aNumeri)); //  assegna a oMin il valore trovato.
	//  begin e end serve per creare un range di elementi contenuti in quel array. si potrebbe utilizzare anche: (arr, arr + n) in entrambi i casi
	
	cout << '\n'<< "il numero più piccolo è " << *oMin << " e il numero più grande è " << *oMax;  //  asterisco è molto importante, senza verrà scritto un valore (di 4bytes) casuale.
	
	return 0;
}