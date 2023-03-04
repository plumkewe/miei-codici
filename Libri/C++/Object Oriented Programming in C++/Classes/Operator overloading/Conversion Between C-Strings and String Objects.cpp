#include <iostream>
#include <string.h>

using namespace std;

//  

class String 
{
private:
	enum { SIZE = 50 };
	char str[SIZE];
	
public:
	String() { str[0] = '\0'; }
	String( char s[] ) { strcpy(str, s); }

	void Display() const { cout << str; }
	operator char*() { return str; }
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	String s1;
	
	char xstr[] = "HEY HEY! ";
	s1 = xstr;
	s1.Display();
	
	String s2 = "Ciao ciao! ";
	cout << static_cast<char*> (s2); //  converta da String a c-string prima di stamprarlo
	
	
	return 0;
}