#include <iostream>

using namespace std;

//  Classes

//  Link: https://youtu.be/2BP8NhxjrO0
//  Title: Classes in C++
//  Creator: The Cherno

//  

class giocatore {  //  sono di base privati. a diferenza di struct che di base 
				   //  sono pubblici.
	
public: //  è un concetto di visibilità public sta a dire che possiamo accedere
		//  a questi dati attraverso la funzione main, se invece è private non 
		//  lo si può fare.
	
	int x, y;
	int speed;
	
	void muovi (int xa, int ya) {
		//  questa funzione si potrebbe mettere anche al di fuori del "class"
		//  ma per avere un codice più pulito e organizzato è meglio metterla qui.
		
		x += xa * speed;
		y += ya * speed;
		
	}
	
	
};

int main() {
	setlocale(LC_ALL, "italian");
	
	giocatore giocatore;
	giocatore.x = 10;
	
	giocatore.muovi(1, -1);
	
	return 0;
}

//  si può vivere anche senza le classi ma sono benvenute, servono per avere un
//  codice piú pulito che a sua volta sarà più facile da mantenere.