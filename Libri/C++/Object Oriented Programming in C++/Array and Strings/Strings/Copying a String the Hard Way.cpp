#include <iostream>
#include <cstring>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	char str1[] = "Oh, ciao, umano! " "Il nostro viaggio è finito!";
	
	const int MAX = 80;
	char str2[MAX];
	
	for (int i = 0; i < strlen(str1); i++)
		str2[i] = str1[i];
	
//	str2[i] = '\0';
	
	cout << str2 << endl;
	
	
	return 0;
}