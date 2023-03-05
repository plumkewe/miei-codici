#include <fstream>
#include <iostream>
#include <string>

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	char 	ch = 'c';
	int 	j = 21;
	double  d = 21.21;
	
	std::string  str1 = " ciao ";
	std::string  str2 = " addio ";
	
	
	std::ofstream outfile("ciao21.txt");
	
	outfile << ch << j << ' ' << d << str1 << ' ' << str2;
	
	std::cout << "FILE FRITTEN\n";
	
	
	return 0;
}