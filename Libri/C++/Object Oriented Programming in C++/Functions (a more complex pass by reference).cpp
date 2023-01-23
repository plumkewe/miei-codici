#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	void order (int&, int&);
	
	int n1 = 99, n2 = 11;
	int n3 = 22, n4 = 88;
	
	order (n1, n2);
	order (n3, n4);
	
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	cout << "n3 = " << n3 << endl;
	cout << "n4 = " << n4 << endl;
	
	
	return 0;
}

void order (int& num1, int& num2)
{
	if (num1 > num2)
	{
		int temp = num1;
		num1     = num2;  //  swap
		num2     = temp;
	}
	
}