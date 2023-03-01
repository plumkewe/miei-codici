#include <iostream>

using namespace std;

//  

const int LIMIT = 100;

class safeArray
{
private:
	int arr[LIMIT];
	
public:
	int& access(int n)
	{
		if ( n < 0 || n >= LIMIT )
			{ cout << "\nIndex out of bounds"; exit(1); }
		return arr[n];
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	safeArray sa1;
	
	for (int i = 0; i < LIMIT; i++)
		sa1.access(i) = i * 10;
	
	for (int i = 0; i < LIMIT; i++)
	{
		int temp = sa1.access(i);
		cout << "Element " << i << " is " << temp << endl;
	}
	
	
	return 0;
}