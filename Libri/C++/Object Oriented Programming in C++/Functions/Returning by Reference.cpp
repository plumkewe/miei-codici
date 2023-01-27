#include <iostream>

using namespace std;

//  

int x;
int& setx();


int main()
{
	setlocale(LC_ALL, "italian");
	
	setx() = 92;  //  lo possiamo fare perchè la nostra function è int& e perchè la nostra variabile è globale
	cout << "x = " << x << endl;
	
	
	return 0;
}

int& setx()
{
	return x;
}