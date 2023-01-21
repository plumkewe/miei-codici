#include <iostream>

using namespace std;

//  

struct Distance
{
	int     feet;
	float inches;
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	Distance d1, d3;
	Distance d2 = { 11, 6.26 };
	
	
	cout << "Enter feet: ";
	cin  >> d1.feet;
	
	cout << "Enter inches: ";
	cin  >> d1.inches;
	
	d3.inches = d1.inches + d2.inches; //  cosi si può fare!
	d3.feet   = 0;
	
	if (d3.inches >= 12.0)
	{
		d3.inches = 12.0;
		d3.feet ++ ;
	}
	
	d3.feet += d1.feet + d2.feet;
	
//  non si può fare d3 = d1 + d2;  perchè c++ non può sommare variabili di tipo distance.
//	Funziona con i tipi predefiniti (int, float...) e non quelli creati da noi;
	
	cout << d1.feet << "\'-" << d1.inches << "\" + ";
	cout << d2.feet << "\'-" << d2.inches << "\" = ";
	cout << d3.feet << "\'-" << d3.inches << "\"\n";
	
	
	return 0;
}