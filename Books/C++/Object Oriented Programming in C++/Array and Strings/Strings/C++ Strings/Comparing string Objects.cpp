#include <iostream>
#include <string>

using namespace std;

//  si possono usare gli operatori overloadati per verifiare se una stringa è uguale oppure se precede l'altra in ordine alfabetico


int main()
{
	setlocale(LC_ALL, "italian");
	
	string aName = "Cecilia";
	string user_name;
	
	cout << "Enter you firs name: ";
	cin  >>  user_name;
	
	if (user_name == aName)
		cout << "Greeatings, Cecilia\n";
	else if (user_name < aName)
		cout << "You come before Cecilia\n";
	else
		cout << "You come after Cecilia\n";
	
	int n = user_name.compare(0, 2, aName, 0, 2);
	
	cout << "The first two letters of your name ";
	
	if (n == 0)
		cout << "match ";
	else if (n < 0)
		cout << "come before ";
	else 
		cout << "come after ";
	
	cout << aName.substr(0, 2) << endl;	
	
	
	return 0;
}