#include <iostream>
#include <string>

//  Tempaltes C++

//  Link: https://youtu.be/I-hZkUa9mIs
//  Title: Templates in C++
//  Creator: The Cherno

//  Funzioni


template <typename T>  
//  questo template è come una scorciatoia è molto utile poiche non devi creare 
//  più di una funzione per poter farla funzionare con qualsiasi tipo di "valore"

void stampa (T valore) {  
//  questa funzione non esiste, o meglio si crea (il nostro compilatore lo fa al
//  posto nostro) con il richiamo dalla funzione main.
	
	std::cout << valore << std::endl;
	
}

int main() {
	setlocale(LC_ALL, "italian");
	
	stampa(10);
	stampa("ciao");
	stampa(10.5f);  //  la f alla fine sta a significare che è un valore di tipo
					//  float e no double, preferibilmente da usare sempre e non 
					//  solo nei template!
	stampa(2.2121);
	stampa <std::string> ("Ciao Amici!"); //  posiamo anche specificare il tipo
										  //  nelle <> ma non è richiesto da che
										  //  il nostro compilatore è in grado di
										  //  farlo da se, ma si può farlo
	
	
	return 0;
}