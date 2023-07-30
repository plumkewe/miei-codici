#include <iostream>

using namespace std;

//  Non si dovrebberò utilizzare causano molti problemi che sono difficili da trovare
//  si possono deffinire anche in questo modo: char(intVal) o intVal(char) ma! si fa
//  fatica ad spottarli all'instantea. Usarli solo nei casi di necessità estrema.


int main()
{
	setlocale(LC_ALL, "italian");
	
	int intVar = 1500000000; //  è un numero troppo grande per type int
	
	intVar = (intVar * 10) / 10;
	cout << "intVar = " << intVar << endl; //  e il risultato sarà sbagliato
	
	intVar = 1500000000;
	intVar = (static_cast<double> (intVar) * 10) / 10;  //  ma in questo modo viene creata una variabile
	cout << "intVar = " << intVar << endl;				//  temporanea di tipo double con lo stesso valore
														//  di inVar ma dato noi volevamo moltiplicare
														//  il valore di 10 che non poteva essere contenuto in int
	return 0;
}