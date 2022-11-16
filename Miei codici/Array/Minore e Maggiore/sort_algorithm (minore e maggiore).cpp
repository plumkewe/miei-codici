#include <iostream>
#include <algorithm> //  serve per il sort
#include <iomanip> //  serve per manipolare il cin (R 27-28)

using namespace std;

//  Richiedi 10 numeri, e in seguito stampa il maggiore e il minore di essi.
//  Versione 0.1


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[10], //  creiamo un array di tipo int e con "10 elementi"
		sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi sono nel array
		
	cout << "sarò in gradi di stabilire il più grande e il più piccolo numero tra i 10 che inserirai\n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero" 
		
		cout << "inserisci il " << n << " numero ";
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			
			cout << "[!] Il valore devessere del tipo int, riprova "; //  messaggio per indicare che ce un errore 
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}

	}
	
	sort(aNumeri, aNumeri + sQuanti); //  sort(da, a) anumeri + sQuanti rapresentanto l'ultimo contenuto del array. aNumeri rapresenta il primo contenuto del array facendo cosi un "range da a". gli elementi verranno ordinati in modo crescente (dal più piccolo al più grande.
	
	cout << '\n'<< "il numero più piccolo è " << aNumeri[0] << " e il numero più grande è " << aNumeri[sQuanti - 1]; //  stampa il primo (0) numero del array che dopo ordinamento è diventato quello più piccolo (aNumeri[0]) e l'ultimo che è quello più grande (aNumeri[sQuanti - 1])
	
	return 0;
}