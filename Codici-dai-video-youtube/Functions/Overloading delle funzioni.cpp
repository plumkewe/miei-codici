#include <iostream>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/A-j5xN-pOCU
//  Title: Перегрузка функций c++ пример.Что такое перегрузка функций. Как перегрузить функцию. Урок #40
//  Creator: #SimpleCode

//  

int Sum (int a, int b, int c) //  overloading per i parametri 
{
	return a + b + c;
}

int Sum (int a, int b)  //  funziona solo con int e non double, float...
{
	return a + b;
}

double Sum (double a, double b) //  nonostante che abbiano lo stesso nome 
								//  all'interno della funzione posso fare
								//  quello che mi pare
{
	a = a + b;
	b = b + b + b / 2;
	
	cout << b;
	cout << a;
	
	return a + b;
}


int main() {
	setlocale(LC_ALL, "italian");
	
	
	cout << Sum (10.19, 32.4) << endl;  //  senza specificare niente il nostro compilatore
										//  fa tutto per noi
							
	cout << Sum (10, 50) << endl;		// 	questo si chiama overloading della funzine 
										//  dato che hanno lo stesso nome ma tipo di dati
										//  accettato diverso
	
	cout << Sum (5, 6, 19) << endl;
	
	
	return 0;
}