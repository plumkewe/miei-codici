#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//  doveva utilizzare ASCII attraverso cast ma ok

enum Suit { clubs, diamonds, hearts, spades };

const int jack  = 11;
const int queen = 12;
const int king  = 13;
const int ace   = 14;

class card 
{
private:
	
	int number;
	Suit  suit;
	
	
public:
	
	card () {};
	void set(int n, Suit s) { suit = s; number = n; }
	void display();
};

void card::display()
{
	if (number >= 2 && number <= 10)
		cout << number;
	else
		switch (number)
		{
			case jack:  cout << "J"; break;;
			case queen: cout << "Q"; break;;
			case king:  cout << "K"; break;;
			case ace:   cout << "A"; break;;
		}
//	switch (suit)
//	{
//		case clubs:    cout << static_cast<char> (5); break;
//		case diamonds: cout << static_cast<char> (4); break;
//		case hearts:   cout << static_cast<char> (3); break;
//		case spades:   cout << static_cast<char> (6); break;
//	}
	switch (suit)
	{
		case clubs:    cout << "♣"; break;
		case diamonds: cout << "♢"; break;
		case hearts:   cout << "♡"; break;
		case spades:   cout << "♠"; break;
	}
;}


int main()
{
	setlocale(LC_ALL, "italian");
	
	card deck[52];
	int i;
	
	for (i = 0; i < 52; i++)
	{
		int num = (i % 13) + 2;
		Suit su = Suit(i / 13);
		deck[i].set(num, su);
	}
	
	cout << "\nOrdered desk:\n";
	for (i = 0; i < 52; i++)
	{
		deck[i].display();
		cout << " ";
		if ( !( (i + 1) % 13) )
			cout << endl;
	}
	
	srand( time(NULL) );
	
	for (i = 0; i < 52; i++)
	{
		int k = rand() % 52;
		card temp = deck[i];
		deck[i] = deck[k];
		deck[k] = temp;
	}
	
	cout << "\nSHiffled deck:\n";
	for (i = 0; i < 52; i++)
	{
		deck[i].display();
		cout << " ";
		if ( !( (i + 1) % 13) )
			cout << endl;
	}

	
	return 0;
}