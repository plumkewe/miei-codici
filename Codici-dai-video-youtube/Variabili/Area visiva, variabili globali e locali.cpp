#include <iostream>

using namespace std;

//  

//  Link: https://youtu.be/a8L1nu4EByI
//  Title: 
//  Creator: #CodeSimple

//  la visibilità delle variabili si limitano con {inizio }fine 


int value; 	//  globale possiamo assegnarli il valore da dove ci pare
			//  meglio non usarle molto


void foo(int value) 	//  se il parametro e la variabile globale hanno lo stesso nome la variabile
{						//  globale verrà ignorata.
	
	int f; 	//  possiamo lavorare con questa variabile solo nella funzione e si dice localw
	f = 0;
	
	value = 40; //  ok
}

int main() {
	setlocale(LC_ALL, "italian");
	
	int k; 	//  senza una inizializzazione una variabile locale avrà il trash dentro
			//  a diferenza delle variabili globali che avranno il valore default = 0 (int)
	
	foo(k); 	// 40 // prima di k
	cout << value << endl; //  0
	
	
	if (true)
	{ // da
		int a; //  questa variabile è visibile solo qui
		a = 0;
		
		value = 3; //  ok
	} // a
	
//	a = 10; //  non si puo
	
	
//	-------------------
	
	int a;
	
	if (true)
	{
		a = 0;
	}
	
	a = 10;
	
	
//	-------------------
	
	for (int i = 0; i < 10; i++)
	{
		i = 10; //  possiamo farlo
	}
	
//	i = 4; // non possiamo
	
	
//	-------------------

	int i;
	
	for (i = 0; i < 10; i++)
		{
			i = 10;
		}

	i = 4;
	
	
//	-------------------
	
	{ // abbiamo limitato la visione con {}
		int a;
		a = 0;
	}
	
	
	return 0;
}