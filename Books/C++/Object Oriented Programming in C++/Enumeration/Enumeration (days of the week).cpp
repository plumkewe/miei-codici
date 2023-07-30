#include <iostream>

using namespace std;

//  Enumerazione funziona quando si sa in anticipo una lista dei valori 

enum days_of_the_week
{
	Sun,
	Mon,
	Tue,  //  si possono mettere anche in fila. ma a me piace cosi
	Wed,
	Thu,
	Fri,
	Sat   //  alla fine non è obbligatorio mettere la virgola
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	days_of_the_week day1, day2;  //  variabili di tipo enum days_of_the_week, qui vv
	
	day1 = Mon;  //  possiamo assegnare qulsiasi valore presente in days_of_the_week, e lo si può fare direttamente sopra ^^
	day2 = Thu;
//	day3 = Helloween;  //  non lo possiamo fare!
	
	int diff = day2 - day1;  //  si può fare aritmetica dei numeri interi
	
	if (day1 < day2)
		cout << "Day1 comes before day2" << endl;
	
	
	return 0;
}