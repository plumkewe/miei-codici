#include <iostream>
#include <string>

using namespace std;

//  Ternary Operators

//  Link: https://youtu.be/ezqsL-st8qg
//  Title: Ternary Operators in C++ (conditional assignment)
//  Creator: The Cherno

//  

static int s_Level = 5;
static int s_Speed = 2;

int main() {
	setlocale(LC_ALL, "italian");
	
	if (s_Level > 5)
		s_Speed = 10;

	else
		s_Speed = 5; //  si può scrivere anche in questo modo:
	
	s_Speed = s_Level > 5 ? 10 : 5;
	
	
	string rank = s_Level > 10 ? "Master" : "Beginner";
	
	
	string anotherRank; //  fare in questo modo è anche tecnicamente più lento!
	//  ^ questa è una stringa temporanea che di seguito viene "uccisa"
	if (s_Level > 10)
		anotherRank = "Master"; //  perchè si sopra scrivere sul obj.string
	else
		anotherRank = "Beginner";
	
	
	//  nasted
	
	s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5; //  si può scrivere
														//  anche in questo modo
	
	cout << s_Speed << endl;
	
	s_Speed = s_Level > 10 ?  15 :  //  ma non mi piace 
			  s_Level > 5  ?  10 :
								5;
												
	cout << s_Speed << endl;
	
	
	// s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;  come funziona
	// in parole: se s_level è magiore di 5 ma se è anche maggiore di 10
	// assegna il valore di 15 altrimenti se non lo è 10 ma è maggiore di 5 
	// allora è 10 se non è maggiore di 10 allora 5
	
	return 0;
}