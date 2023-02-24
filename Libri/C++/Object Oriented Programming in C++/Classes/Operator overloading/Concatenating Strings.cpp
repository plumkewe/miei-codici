#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

//  

class String 
{
private:
	enum { SIZE = 80 };
	char str[SIZE];
	
public:
	String() { strcpy(str, ""); }
	String( char s[] ) { strcpy(str, s); }
	void display() const { cout << str; }
	
	String operator + (String ss) const
	{
		String temp;
		if ( strlen(str) + strlen(ss.str) < SIZE)
		{
			strcpy(temp.str, str);
			strcat(temp.str, ss.str);
		}
		else
		{ cout << "\nString overflow"; exit(1); }
	
	return temp;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	String s1 = "\nMErry Christmas! ";
	String s2 = "Happy new year!";
	String s3;
	
	s1.display();
	s2.display();
	s3.display();
	
	s3 = s1 + s2;
	
	s3.display();
	
	
	return 0;
}