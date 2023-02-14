#include <iostream>
#include <iomanip>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	const int MAX = 20;
	char str[MAX];
	
	cout << "Enter a string: ";
	cin  >>  setw(MAX) >> str; //  non permette di inserire più char di MAX - 1 pk 1 è null char aka '\0'
	
	cout << "You entered: " << str << endl;
	
	
	return 0;
}