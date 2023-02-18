#include <iostream>
#include <string>

using namespace std;

//  ci sono altre funzionalita che ritornano -1 se non trovano niente, anche queste eh


int main()
{
	setlocale(LC_ALL, "italian");
	
	string s1 = "Ciao mi chiamo dario e sono un ragazzo";
	
	int n;
	
	
	n = s1.find("dario");
	cout << "Found dario at " << n << endl;
	
	n = s1.find_first_of("q"); //  cerca il carattere di questo gruppo gruppo 's' 'p'...
	cout << "First of spde at " << n << endl;
	
	n = s1.find_first_of("aeiouAEIOU"); //  trova il primo carattere che non è quello presente nel nostro gruppo
	cout << "First consonant at " << n << endl;
	
	
	return 0;
}