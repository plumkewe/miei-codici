#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
//	v keyword const 
	const int SIZE = 6;  // più comodo usare una variabile per la lunghezza del array!
	double sales[SIZE];
	
	cout << "Enter widget sales for 6 days" << endl;
	
	for (int i = 0; i < SIZE; i++)
		cin >> sales[i];
	
	double total = 0;
	
	for (int i = 0; i < SIZE; i++)
		total += sales[i];
//	          /\ addition assignment
	double avarge = total / SIZE;
	
	cout << "Avarge = " << avarge << endl;
	
	
	return 0;
}