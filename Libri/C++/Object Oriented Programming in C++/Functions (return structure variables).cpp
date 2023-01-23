#include <iostream>

using namespace std;

//  

struct Distance
{
	int     feet;
	float inches;
};

Distance Addengl(Distance, Distance);
void Engdisp(Distance);

int main()
{
	setlocale(LC_ALL, "italian");
	
	Distance d1, d2, d3;
	
	cout << "Enter feet: ";
	cin  >> d1.feet;
	
	cout << "Enter inches: ";
	cin  >> d1.inches;
	
	
	cout << "\nEnter feet: ";
	cin  >> d2.feet;
	
	cout << "Enter inches: ";
	cin  >> d2.inches;
	
	d3 = Addengl(d1, d2);
	cout << endl;
	
	Engdisp(d1); cout << " + ";
	Engdisp(d2); cout << " = ";
	Engdisp(d3); cout <<  endl;
	
	return 0;
}

Distance Addengl( Distance dd1, Distance dd2 )
{
	Distance dd3;
	
	dd3.inches = dd1.inches + dd2.inches;
	dd3.feet   = 0;
	
	if (dd3.inches >= 12.0)
	{
		dd3.inches -= 12;
		dd3.feet ++;
	}
	
	dd3.feet += dd1.feet + dd2.feet;


	return dd3;
}

void Engdisp( Distance dd )
{
	cout << dd.feet << "\'" << dd.inches << "\"";
}