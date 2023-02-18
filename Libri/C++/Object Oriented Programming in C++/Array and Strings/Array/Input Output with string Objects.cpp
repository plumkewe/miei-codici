#include <iostream>
#include <string>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	string full_name, nickname, address;  //  objects of string class
	string greeting("Hello, ");
	
	cout << "Enter your full nane: ";
	getline(cin, full_name);
	cout << "Your full name is: " << full_name << endl;
	
	cout << "Enter your nickname: ";
	cin  >>  nickname;  //  input to string object
	
	greeting += nickname;
	cout << greeting << endl;
	
	cout << "Enter your address on separate lines\n";
	cout << "Terminate with '$'\n";
	
	getline(cin, address, '$');
	cout << "Your address is: " << address << endl;
	
	
	return 0;
}