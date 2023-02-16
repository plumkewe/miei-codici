#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	int month, day, total_days;
//                     v array size (optional)  v initializing values
	int days_per_month[12] = { 31, 28, 31, 30, 31, 30, // < commas
							   31, 31, 30, 31, 30, 31 }; // < braces 
							
	cout << "Enter month (1 to 12): ";   cin >> month;
	cout << "Enter day (1 to 31): ";     cin >> day;
	
	total_days = day;
	
	for (int i = 0; i < month -1; i++)
		total_days += days_per_month[i];
	
	cout << "Total days from start of the year is: " << total_days << endl;
	
	
	return 0;
}