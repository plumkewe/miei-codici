#include <iostream>
#include <cstring>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	char str1[] = "Animale, animale!\n" "Che tu sei...";
	
	const int MAX = 80;
	char str2[MAX];
	
	strcpy(str2, str1); //  prima la destinazione e dopo la sorgente!
	cout << str2 << endl;
	
	
	return 0;
}