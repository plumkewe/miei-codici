#include <iostream>

using namespace std;

//  Aritmetica dei puntatori

//  Link: https://youtu.be/Weh6UoLkNUQ
//  Title: 
//  Creator: #SimpleCode

//  il problema della aritmetica dei puntatori è che si può entrare nella memoria nella quale non ci si doveva!


int main() {
	setlocale(LC_ALL, "italian");
	
	const int SIZE = 5;
	int arr[SIZE] { 4, 51, 53, 2, 3 };
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl; //  questo
	}							//  è uguale
								//  a questo:
	
	int *pArr = arr; 	//  array è gia un pointer alla prima possizione!
						//  abbiamo assegnato al pArr l'indirzzo del array[0]
						
	cout << "\n---------------\n" << endl;
	
	cout << "arr \t"  <<  arr << endl;
	cout << "pArr \t" << pArr << endl;
	
	cout << "\n---------------\n" << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << pArr[i] << endl; 	//  questo è uguale a questo cout << *(pArr + i) << endl;
	}								//  dato che abbiamo puntato il pArr alla prima posizione del array
									//  sapendo che l'array è un blocco di memoria continuo, aggiungento + i
									//  ci si sposta di (int) byte del array quindi viaggiamo attravarso l'array
									
									//  senza * ci stampera l'indirizzi della memoria dove sono allocati questi indici
	return 0;
}