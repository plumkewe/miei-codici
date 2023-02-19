#include <iostream>
#include <string>

using namespace std;

//  lo si può fare in diversi modi, utilizzando loverloading del operatore [] oppure attraverso la funzione membro at(), meglio usare at()


int main()
{
	setlocale(LC_ALL, "italian");
	
	char charray[5];
	string word;
	
	cout << "Enter a word: ";
	cin  >>  word;
	int wlen = word.length();
	
	cout << "One character at a time: ";
	for (int i = 0; i < wlen; i++)
		cout << word.at(i);
	
	word.copy(charray, wlen, 0);
	charray[wlen] = 0;
	cout << "\nArray contains: " << charray << endl;
	
	
	return 0;
}