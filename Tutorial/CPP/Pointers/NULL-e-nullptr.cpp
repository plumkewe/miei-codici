#include <iostream>

using namespace std;

//  

//  Link: https://youtu.be/aSQoBjMdp7M
//  Title: 
//  Creator: #SimpleCode

//  prima delete e poi nullptr per non avere un lack di memoria!


int main() {
	setlocale(LC_ALL, "italian");
	
	int *pa = new int;
	*pa = 10;
	
	cout << *pa << endl;
	
	
	delete pa;
	
	
	pa = NULL;
	
	cout << pa << endl;
	
	if (pa != NULL)  //  possiamo usare anceh nullptr (nullptr non è uguale a NULL)
		cout << pa << endl;

	
	pa = 0;  //  uguale a
	pa = NULL;  // questo
	
	pa = nullptr;
	
	delete pa;
	
	
	return 0;
}