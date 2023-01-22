#include <iostream>

using namespace std;

//  

void Starline();  //  function declaration

int main()
{
	setlocale(LC_ALL, "italian");
	
	Starline();
	cout << "Data type      Range" << endl;
	
	Starline();  //  function call
	cout << "char          -128 to 127"                     << endl;
	cout << "short         -32,768 to 32,767"               << endl;
	cout << "int            System depend"                  << endl;
	cout << "long          -2,147,483,648 to 2,147,483,647" << endl;
	Starline();
	
	return 0;
}

void Starline() //  function declarator
{
	for (int prime_i = 0; prime_i < 45; prime_i++)  //  function body
		cout << '*';
	
	cout << endl;
} //  tutto si chiama function definition