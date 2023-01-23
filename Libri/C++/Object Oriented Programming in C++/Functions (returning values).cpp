#include <iostream>

using namespace std;

//  leggere da giù verso su

float Lbstokg(float);  //  argomento


int main()
{
	setlocale(LC_ALL, "italian");
	
	float lbs, kgs;  //  eliminare kgs
	
	cout << "Enter your weight in pounds: ";
	cin  >> lbs;
	
	kgs = Lbstokg(lbs);
	
	cout << "Your weight in kilograms is " << kgs << endl;  //  anche qui si poteva fare direttamente cout << Lbstokg(lbs)
	
	
	return 0;
}

float Lbstokg(float pounds)
{
	float killograms = 0.453592 * pounds;  //  alcune variabili sono inutili ad esempio questa
	
	return killograms;  //  si può direttamente scrivere return (0.453592 * pounds);
}