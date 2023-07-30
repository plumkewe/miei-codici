#include <iostream>

using namespace std;

//  enum non sono perfetti dato che c++ li trata come int e quindi nel i/o
//  non uscirá il nome della variabile ma il suo valore.

//  altri tipi di enum: 
//  enum switch { off, on }; 
//  enum meridian { am, pm }; 
//  enum coins { penny, nickel, dime, quarter, half-dollar, dollar };
//  enum months { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

const int    jack = 11;
const int   queen = 12;
const int    king = 13;
const int     ace = 14;

enum Suit
{
	clubs,     //  inziano da 0, ma possiamo farli iniziare da qualsiasi valore
	diamonds,  //  in questo modo clubs = 1...
	hearts,
	spades
};

struct Card
{
	int number;
	Suit suit;
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	Card temp, chosen, prize;
	int position;
	
	Card card1 = { 7, clubs };
	cout << "Card 1 is the 7 of clubs\n";
	
	Card card2 = { jack, hearts };
	cout << "Card 2 is the jack of hearts\n";
	
	Card card3 = { ace, spades };
	cout << "Card 3 is the ace of spades\n";
	
	prize = card3;  //  i valori che si trova al interno di questa variabile
					//  sono quelli vincenti
	
	cout << "\nI'm swapping card 1 and card 3"; //  si mescolano i valori
	temp = card3; card3 = card1; card1 = temp;
	
	cout << "\nI'm swapping card 2 and card 3";
	temp = card3; card3 = card2; card2 = temp;
	
	cout << "\nI'm swapping card 1 and card 2";
	temp = card2; card2 = card1; card1 = temp;
	

	cout << "\n\nNow, where (1, 2 or 3) is the ace of spades? ";
	cin  >> position;
	
	switch (position)
	{
		case 1: chosen = card1;
			break;
		case 2: chosen = card2;
			break;
		case 3: chosen = card3;
			break;
	}
	
	if ((chosen.number == prize.number) && (chosen.suit == prize.suit)) //  non si può scrivere chosen == prize 
		cout << "You win!" << endl;
	else
		cout << "Sorry, you lose" << endl;
	
	
	return 0;
}