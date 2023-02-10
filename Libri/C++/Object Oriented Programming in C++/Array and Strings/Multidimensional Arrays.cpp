#include <iostream>
#include <iomanip>

using namespace std;

//  

const int DISTRICS = 4;
const int MONTHS = 3;


int main()
{
	setlocale(LC_ALL, "italian");
	
	int d, m;
	double sales[DISTRICS][MONTHS]; //  4 righe e 3 colonne: 4 array 1D di lunghezza 3
	
	for (d = 0; d < DISTRICS; d++)
		for (m = 0; m < MONTHS; m++)
		{
			cout << "Enter sales for district " << d +1;
			cout << ", month " << m +1 << ": ";
			cin  >>  sales[d][m];
		}
	
	cout << "\n\n";
	cout << "                     Month\n";
	cout << "                1         2         3";
	
	for (d = 0; d < DISTRICS; d++)
	{
		cout << "\nDistrict " << d +1;
		
		for (m = 0; m < MONTHS; m++)
			cout << setiosflags(ios::fixed)     //  not exponential
				 << setiosflags(ios::showpoint) //  always use point
				 << setprecision(2)				//  digits to right 2
				 << setw(10)						//  field width
				 << sales[d][m];
	}
	
	
	return 0;
}