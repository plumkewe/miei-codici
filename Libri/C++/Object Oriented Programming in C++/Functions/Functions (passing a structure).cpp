#include <iostream>

using namespace std;

//  

struct Distance
{
	int     feet;
	float inches;
};

void Engdisp ( Distance );

int main()
{
	setlocale(LC_ALL, "italian");
	
	Distance d1, d2;
	
	cout << "Enter feet: ";
	cin  >> d1.feet;
	
	cout << "Enter inches: ";
	cin  >> d1.inches;
	
	
	cout << "\nEnter feet: ";
	cin  >> d2.feet;
	
	cout << "Enter inches: ";
	cin  >> d2.inches;
	
	
	cout << "\nd1 = ";
	Engdisp(d1);
	
	cout << "\nd2 = ";
	Engdisp(d2);
	
	
	return 0;
}

void Engdisp ( Distance dd )  //  parameter dd of type distance, facendo così
{
	cout << dd.feet << "\'-" << dd.inches << "\"";	//  possiamo accederli nella funzione
	
//	se avessimo ad esempio dd.feet == 2; non cambierebe i valori del membro passato. 
//  bisogna fare finta che sia una funzione normale come tutte le altre (beh lo è)
}