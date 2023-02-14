#include <iostream>

using namespace std;

//  C-style strings/ C-strings ==  arrays of type char


int main()
{
	setlocale(LC_ALL, "italian");
	
	const int MAX = 32; // max characters in string
	char str[MAX];
	
	cout << "Enter string: ";
	cin  >>  str; //  ogni carattere occupa un byte e finisce per null character '\0' cout mostro tutto affinche non arriva a '\0'
	
	cout << str;
	
	
	return 0;
}