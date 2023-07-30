#include <iostream>

using namespace std;

//  

class String
{
private:
	
	enum { SZ = 80 };
	char str[SZ];
	
public:
	
	String() { str[0] = '\0'; }
	
	String( char s[] ) { strcpy(str, s); }
	
	void display() { cout << str; }
	void concat(String s2)
	{
		if (strlen(str) + strlen(s2.str) < SZ)
			strcat(str, s2.str);
		else
			cout << "\nString too long";
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	String s1 ("Merry Christmas! "); //  non funziona con c++11 ma ok
	String s2 = "Season's Greetings!";
	String s3;
	
	cout << "\ns1 = "; s1.display();
	cout << "\ns2 = "; s2.display();
	cout << "\ns3 = "; s3.display();
	
	s3 = s1;
	cout << "\ns3 = "; s3.display();
	
	s3.concat(s2);
	cout << "\ns3 = "; s3.display();
	
	
	return 0;
}