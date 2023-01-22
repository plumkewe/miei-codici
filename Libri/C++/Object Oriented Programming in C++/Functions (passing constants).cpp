#include <iostream>

using namespace std;

//  

void Repchar(char, int);  //  function declaration

int main()
{
	setlocale(LC_ALL, "italian");
	
	Repchar('-', 35); //  passing CONST arguments
	cout << "Data type      Range" << endl;
	
	Repchar('-', 35);  //  function call
	cout << "char          -128 to 127"                     << endl;
	cout << "short         -32,768 to 32,767"               << endl;
	cout << "int            System depend"                  << endl;
	cout << "long          -2,147,483,648 to 2,147,483,647" << endl;
	Repchar('-', 35);
	
	return 0;
}

void Repchar(char ch, int n) //  function declarator with parameters
{
	for (int prime_i = 0; prime_i < n; prime_i++)  //  function body
		cout << ch;
	
	cout << endl;
} //  tutto si chiama function definition