#include <iostream>

using namespace std;

//  

void repchar();
void repchar(char);
void repchar(char, int); //  function signature - the number of arguments and their data type


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

void repchar()
{
	for (int prime_i = 0; prime_i < 45; prime_i++)
		cout << '+';
	
	cout << endl;
}

void repchar(char ch)
{
	for (int prime_i = 0; prime_i < 45; prime_i++)
		cout << ch;
	
	cout << endl;
}