#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	const int MAX = 20;
	char str[MAX];
	
	cout << "Enter a string: ";
	cin.get(str, MAX);
	
	cout << "You entered: " << str << endl;
	
	
	return 0;
}