#include <iostream>

using namespace std;

//  

void Repchar(char, int);  //  function declaration

int main()
{
	setlocale(LC_ALL, "italian");
	
	char chin;
	int   nin;
	
	cout << "Enter a character: ";
	cin  >> chin;
	
	cout << "Enter number of times to repeat it: ";
	cin  >> nin;
	
	Repchar(chin, nin); //  passing by value
	cout << "Data type      Range" << endl;
	
	Repchar(chin, nin);  //  function call
	cout << "char          -128 to 127"                     << endl;
	cout << "short         -32,768 to 32,767"               << endl;
	cout << "int            System depend"                  << endl;
	cout << "long          -2,147,483,648 to 2,147,483,647" << endl;
	Repchar(chin, nin);
	
	return 0;
}

void Repchar(char ch, int n) //  function declarator with parameters
{
	for (int prime_i = 0; prime_i < n; prime_i++)  //  function body
		cout << ch;
	
	cout << endl;
} //  tutto si chiama function definition