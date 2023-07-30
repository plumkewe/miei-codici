#include <iostream>

using namespace std;

//  

unsigned long Factfunc(unsigned long);


int main()
{
	setlocale(LC_ALL, "italian");
	
	int n;
	unsigned long fact;
	
	cout << "Enter an integer: ";
	cin  >> n;
	fact = Factfunc(n);
	
	cout << "Factorial of " << n << " is " << fact << endl;
	
	
	return 0;
}

unsigned long Factfunc(unsigned long n)
{
	if (n > 1)
		return n * Factfunc(n - 1);
	else
		return 1;
}