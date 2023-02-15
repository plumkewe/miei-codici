#include <iostream>

using namespace std;

//  allora è un array 2d che è composto di stringa e della sua lunghezza massima,
//  si può accedere senza specificare il secondo parametro, superata la lunghezza
//  massima un buon complilatore dará un errore


int main()
{
	setlocale(LC_ALL, "italian");
	
	const int DAYS = 7;  //  numero di stringhe 
	const int MAX = 10;  //  la lunghezza massima di ogni stringa
//	v  array di stringe
	char star[DAYS][MAX] = { "Monday", "Tuesday",
							 "Wednesday", "Thursday",
							 "Friday", "Saturday", "Sunday" };
	
	for (int i = 0; i < DAYS; i++)
		cout << star[i] << endl;
	
	
	return 0;
}