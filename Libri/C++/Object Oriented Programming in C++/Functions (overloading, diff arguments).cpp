#include <iostream>

using namespace std;

//  

struct Distance
{
	int     feet;
	float inches;
};

void engdisp ( Distance );
void engdisp ( float );

int main()
{
	setlocale(LC_ALL, "italian");
	
	Distance d1;
	float    d2;
	
	cout << "Enter feet: ";
	cin  >> d1.feet;
	cout << "Enter inches: ";
	cin  >> d1.inches;
	
	cout << "Enter entire distance in inches: ";
	cin  >> d2;
	
	
	cout << "\nd1 = ";
	engdisp( d1 );
	
	cout << "\nd2 = ";
	engdisp( d2 );
	
	
	return 0;
}

void engdisp ( Distance dd )
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}

void engdisp ( float dd )
{
	int feet = static_cast<int> (dd / 12);
	float inches = dd - feet * 12;
	cout << feet << "\'-" << inches << "\"";
}