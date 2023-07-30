#include <iostream>

using namespace std;

//  

inline float lbstokg(float pounds)  //  solo per delle funzioni brevi!, se è troppo lunga 
{ 									//  il compilatore può ignorarla! 
	return 0.453592 * pounds;
}


int main()
{
	setlocale(LC_ALL, "italian");
	
	float lbs = 0;
	
	cout << "Enter your weight in pounds: ";
	cin  >> lbs;
	
	cout << "Your weight in kilograms is " << lbstokg(lbs) << endl;
	
	
	return 0;
}