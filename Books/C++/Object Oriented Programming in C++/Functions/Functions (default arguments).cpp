#include <iostream>

using namespace std;

//  

void repchar(char = '*', int = 45);  	//  default values, default values non possono essere
										//  in mezzo D nd D, devono essere sempre prima!


int main()
{
	setlocale(LC_ALL, "italian");
	
	repchar();
	repchar('=');
	repchar('*', 30);
	
	
	return 0;
}

void repchar(char ch, int n)
{
	for (int prime_i = 0; prime_i < n; prime_i++)
		cout << ch;
	
	cout << endl;
}