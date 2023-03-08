#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	string str = "Il tempo è bello professore, ma purtroppo " "io sono qui kek";
	
	ofstream outfile ("CiaoCiao.txt");
	
	for(int i = 0; i < str.size(); i++)
		outfile.put( str[i] );
	
	cout << "File written!\n";
	
	
	return 0;
}