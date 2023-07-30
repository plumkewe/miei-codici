#include <iostream>

using namespace std;

//  

class String 
{
private:
	enum { SIZE = 40 };
	char str[SIZE];
	
public:
	String() { strcpy(str, ""); }
	String( char s[] ) { strcpy(str, s); }

	void Display() const { cout << str; }
	void getStr() { cin.get(str, SIZE); }
	bool operator == (String ss) const 
	{
		return  ( strcmp(str, ss.str) == 0 ) ? true : false;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	String s1 = "yes";
	String s2 = "no";
	String s3;
	
	cout << "\nEnter 'yes' or 'no' ";
	s3.getStr();
	
	if (s3 == s1)
		cout << "You entered yes\n";
	else if (s3 == s2)
		cout << "You entered no\n";
	else 
		cout << "You didn't follow the instructions\n";
	
	
	return 0;
}