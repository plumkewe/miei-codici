#include <iostream>

using namespace std;

//  

const int LIMIT = 100;

class safeArray
{
private:
	int arr[LIMIT];
	
public:
	void putel(int n, int elvalue)
	{
		if ( n < 0 || n >= LIMIT ) { cout << "\nIndex out of bounds"; exit(1); }
		arr[n] = elvalue;
	}
	int getel(int n) const
	{
		if ( n < 0 || n >= LIMIT ) { cout << "\nIndex out of bounds"; exit(1); }
		return arr[n];
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	safeArray sa1;
	
	for (int i = 0; i < LIMIT; i++)
		sa1.putel(i, i * 10);
	
	for (int i = 0; i < LIMIT; i++)
	{
		int temp = sa1.getel(i);
		cout << "Element " << i << " is " << temp << endl;
	}
	
	
	return 0;
}