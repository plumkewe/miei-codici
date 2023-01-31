#include <iostream>

using namespace std;

//  

class Counter
{
private:
	unsigned int count;
	
public:
//	Counter() : count(0) {}  //  constructor
							 //  è simile a scrivere:
    						 //  ma non meglio di questo.
	
	Counter() { count = 0; }
	
	void inc_count()
	{
		count ++;
	}
	int get_count()
	{
		return count;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	Counter c1, c2;
	
	cout << "c1 = " << c1.get_count() << endl;
	cout << "c2 = " << c2.get_count() << endl;
	
	c1.inc_count();
	c2.inc_count();
	c2.inc_count();
	
	cout << "c1 = " << c1.get_count() << endl;
	cout << "c2 = " << c2.get_count() << endl;
	
	
	return 0;
}