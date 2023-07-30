#include <iostream>

using namespace std;

//  

class Counter 
{
private:
	
	unsigned int count;
	
	
public:
	
	Counter () : count(0) {}
	unsigned int getCount() { return count; }
	void operator ++ () { ++ count; }
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	Counter c1, c2;
	
	cout << "\nc1 = " << c1.getCount();
	cout << "\nc2 = " << c2.getCount();
	
	++c1;
	++c2;
	++c2;
	
	cout << "\nc1 = " << c1.getCount();
	cout << "\nc2 = " << c2.getCount();
	
	
	return 0;
}