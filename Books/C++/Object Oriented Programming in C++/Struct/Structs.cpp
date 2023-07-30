#include <iostream>
#include <iomanip>

using namespace std;

//  le strutture vengono usate principalmente per salvare i valori a differenza
//  delle classi che possono, salvare i valori e funzioni!

struct parte
{
	int numeromodello;  //  membri della struttura
	int   numeroparte;
	float       costo;
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	parte p1; //  variabile della struttura
	//  access /dot operator seve per accedere al membro della struttura
	p1.numeromodello = 6453;
	p1.numeroparte   = 41;
	p1.costo         = 432.31f;
	
	cout << "Modello: "      << setw(14) << right <<  p1.numeromodello << endl;
	cout << "Numero parte: " << setw(7) << right << p1.numeroparte << endl;
	cout << "Costo: "        << setw(18) << right << p1.costo << endl;
	
	
	return 0;
}