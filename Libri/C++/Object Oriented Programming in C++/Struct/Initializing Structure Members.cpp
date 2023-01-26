#include <iostream>
#include <iomanip>

using namespace std;

//  

struct parte
{
	int numeromodello;  //  membri della struttura
	int   numeroparte;
	float       costo;
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	parte p1 { 6453, 42, 231.3f };	//  questi valori sono già dentro la struttura,
	parte p2 ;						//  in questo modo abbiamo inizializzato la nostra variabile della struttura
	
	cout << "Modello: "      << setw(14) << right << p1.numeromodello << endl;
	cout << "Numero parte: " << setw(7)  << right << p1.numeroparte << endl;
	cout << "Costo: "        << setw(17) << right << p1.costo << endl;
	
	p2 = p1; //  si assegna un struttura ad un'unaltra, solo dello stesso tipo
	
	cout << endl;
	cout << "Modello: "      << setw(14) << right << p2.numeromodello << endl;
	cout << "Numero parte: " << setw(7)  << right << p2.numeroparte << endl;
	cout << "Costo: "        << setw(17) << right << p2.costo << endl;
	
	return 0;
}