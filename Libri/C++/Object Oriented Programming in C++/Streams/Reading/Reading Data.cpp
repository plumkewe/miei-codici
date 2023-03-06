#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	char  ch;
	int    j;
	double d;
	
	string str1;
	string str2;
	
	ifstream inflile("comestai.txt");
	
	inflile >> ch >> j >> d >> str1 >> str2;
	
	cout << ch   << endl 
		 << j    << endl 
		 << d    << endl 
		 << str1 << endl 
		 << str2 << endl;
	
	
	return 0;
} 