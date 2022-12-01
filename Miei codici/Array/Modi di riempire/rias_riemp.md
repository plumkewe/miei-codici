# Riassunti,

###### qui troverai dei codici estratti per scegliere qual è il modo più adatto e in quanti modi si può farlo, se conviene e cet.

###### Incide: <br /> 

- [Valori del utente](#Del-utente) <br />
- [Valori uguali](#Uguali) <br />
- [Valori crescenti](#Crescenti) <br />
- [Valori casuali](#Casuali)  <br />
- [Valori casuali (#random)](#Random)

## Del utente

Per riempire un array di valori presi dal utente e memorizzarli in una posizione del array, solitamente si utilizza il ciclo for, ma questo non vieta l'utilizzo di altri cicli.
Dunque è molto facile farlo, creiamo un ciclo for nel quale all'interno mettiamo un comando che preleva l'input dal utente e lo assegna ad una posizione nel array, per memorizzare un valore si utilizza la variabile 'i' (è indicata da posizione_del_array). che ogni volta dopo esecuzione del ciclo avrà un incremento, dunque "scorrerà" l'array assegnando dei valori.

```cpp
cin >> nome_del_array[posizione_del_elemento]; 
```

oppure,

```cpp
cin >> input_del_utente;
input_del_utente = nome_del_array[posizione_del_elemento];
```


###### Codice intero

```cpp
#include <iostream>

using namespace std;

//  riempire un array di valori di tipo int atraverso un for loop


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[10], //  creiamo un array di tipo int e con "10 elementi"
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi ci sono nel array
	
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		cin >> aNumeri[i];
		
	}
	
	return 0;
}
```


## Uguali

I modi per farlo sono diversi il mio preferito è quello con utilizzo della funzione fill, che pero può essere sostituita da un semplice ciclo for che assegna sempre lo stesso valore scorrendo l'array.
La funzione fill è molto utile, ma non si limita solo a riempire l'array completamente dei valori tutti uguali, ma è anche in grado di riempire i valori ad esempio in centro del array. Ma è una cosa che per ora poco ci interessa.

```cpp
fill (nome_del_array, nome_del_array + lunghezza_del_array, valore_con_il_quale_si_vuole_riempire);
```

###### Codice intero

```cpp
#include <iostream>

using namespace std;

//  riempire un array con dei valori uguali


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumericasuali[10], //  creiamo un array di tipo int e con "10 elementi"
		sQuanti = sizeof(aNumericasuali)/sizeof(aNumericasuali[0]); //  troviamo quanti elementi ci sono nel array
	
	
	fill (aNumericasuali, aNumericasuali + sQuanti, 10); //  riempe tutti i valori nel array con il 10
	
	
	return 0;
}
```


## Crescenti

Beh, questo è il modo più classico e pigro, lo si fa utilizzando sempre un ciclo for e si assegna lo stesso valore della variabile 'i' (posizione_del_elemento) che serve per scorrere l'array ora ci servirà anche per assegnare gli valori, quindi sarà una cosa del genere: `0:0, 1:1, 2:2, 3:3...`

```cpp
nome_del_array[posizione_del_elemento] = posizione_del_elemento;
```

###### Codice intero

```cpp
#include <iostream>

using namespace std;

//  riempire un array con valori crescenti fino all'ultimo elemento utilizzando il ciclo for


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[11], //  creiamo un array di tipo int e con "10 + 1 elementi"
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi ci sono nel array
	
	
	for (int i = 0; i < sQuanti; ++ i) { 
		
		aNumeri[i] = i; //  verrà riempito di valori da 0 fino a 10 (compresi) 
		
	}
	
	
	return 0;
}
```


## Casuali

Per riempire un array con dei valori casuali (ma limitati) bisogna innanzitutto dichiarare dei **HEADER** per la funzionalità rand e sono:
`
#include <stdlib.h>
#include <time.h>
`

Per fare si che i valori siano veramente casuali scriviamo il seguente codice:

```cpp
srand(time(NULL));
```

dopo di che assegnamo il nostro valore casuale ad un elemento nel array utilizziamo il ciclo for, per fare ciò creiamo il nostro ciclo che come incremento avrà posizione_del_elemento (solitamente è 'i') bene e per limitare i numeri casuali scriviamo %limite (dev'essere un numero intero)

```cpp
nome_del_array[posizione_del_elemento] = rand()%limite;
```

###### Codice intero

```cpp
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//  riempire un array con dei valori casuali atraverso un loop e rand 


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumericasuali[10], //  creiamo un array di tipo int e con "10 elementi"
	sQuanti = sizeof(aNumericasuali)/sizeof(aNumericasuali[0]); //  troviamo quanti elementi ci sono nel array
	
	
	srand(time(NULL)); //  per valori casuali
	
	for (int i = 0; i < sQuanti; ++ i) { //  per riempire l'array con numeri casuali
		aNumericasuali[i] = rand()%10; //  % limitiamo i valori (da 0 a 10)
		
	}
	
	return 0;
}
```


## Random

Questa funzione è presente nel **HEADER** random, non scordatevi di includerlo `#include <random>` (da c++11), dunque in questo caso verrà creato un "meccanismo" per generare dei numeri casuali, verramente casuali a differenza del rand!  <br />

Questo è il meccanismo (non so come si chiama io l'ho chiamato meccanismo)  <br />
È meglio lasciarlo cosi com'è, certo va compilato nel <tipo> potete mettere int, double..., potete associale un nome al vostro "meccanismo" (nome_del_meccanismo), tutto il resto deve rimanere com'è

```cpp
random_device rd;
mt19937 nome_del_meccanismo(rd());
uniform_int_distribution<tipo> dist(dal_numero, al_numero); 
```

###### Codice intero

```cpp
#include <iostream>
#include <random>

using namespace std;

//  Creato: 01/12/22
//  Da: swampkewe
//  riempire un array con dei valori veramente atraverso un loop e random header

int main() {
	setlocale(LC_ALL, "italian"); //  per potere utilizzare gli accenti

    int aNumeri [10], //  creiamo un array di tipo int e con "10 elementi"
    sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi ci sono nel array

    //  random copiatelo e cambiatelo al vostro piacere
    random_device rd;
    mt19937 rNumeri(rd()); //  rNumeri è il nome che abbiamo "associato" a questo meccanismo
    uniform_int_distribution<int> dist(sQuanti-sQuanti,sQuanti); //  potete cambiare il tipo tra i <>,
                                                                       // il dist(dal_numero, al_numero) in questo caso da 0 a 10

    for (int i = 0; i < sQuanti; ++i) { //  ciclo for per riempire il nostro array

        aNumeri[i] = dist(rNumeri);  //  associamo il nostro valore casuale alla posizione del elemento i nel array

    }


	return 0;
}
```
