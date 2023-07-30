#include <iostream>

using namespace std;

//  https://www.learncpp.com/cpp-tutorial/pointers-and-const/  


int main()
{
	setlocale(LC_ALL, "italian");
	
	int array [] = { 10, 20, 30 };
	int *pa = array + 2;
	
	cout << "pa ha \"il valore\" che si trova in indice 3 = " << *pa << endl;   //  è più corretto dal mio punto di vista dire che
	pa --;																		//  *pa sta puntando all'indirzzo del terzo indice
																				// 	di array
	
	cout << "pa ha \"il valore\" che si trova in indice 3 - 1 = " << *pa << endl;
	pa --;
	
	cout << "pa ha \"il valore\" che si trova in indice 3 - 1 - 1 = " << *pa << endl;
	
	
	return 0;
}