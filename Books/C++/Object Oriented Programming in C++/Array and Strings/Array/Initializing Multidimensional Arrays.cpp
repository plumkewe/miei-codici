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
	double sales[DISTRICS][MONTHS] = {  { 143.54, 532.2, 535.5 }, // 4 array di 3 valori ogniuno
										{ 324.34, 122.2, 32.5  },
										{ 4.53  , 32   , 432.3 },
										{ 44.44 , 1    , 0     },  };
	
	
	cout << "\n\n";
	cout << "                     Month\n";
	cout << "                1         2         3";
	
	for (d = 0; d < DISTRICS; d++)
	{
		cout << "\nDistrict " << d +1;
		
		for (m = 0; m < MONTHS; m++)
			cout << setiosflags(ios::fixed)
				 << setiosflags(ios::showpoint)
				 << setprecision(2)
				 << setw(10)	
				 << sales[d][m];
	}
	
	
	return 0;
}