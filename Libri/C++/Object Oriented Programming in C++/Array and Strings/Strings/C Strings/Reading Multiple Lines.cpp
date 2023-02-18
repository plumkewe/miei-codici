#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	const int MAX = 40;
	char str[MAX];
	
	cout << "Enter a string: \n";
	cin.get(str, MAX, '$'); //  accettera il testo su più colonne a finche non digitiamo $
	
	cout << "You entered:\n" << str << endl;
	
	
	return 0;
}