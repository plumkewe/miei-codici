#include <iostream>

using namespace std;

//  Funziono T

//  Link: https://youtu.be/LB83A1FIQFg
//  Title: 
//  Creator: #SimpleCode

//  

template <typename T> 	//  template, typename, nome(qualsiasi, ma preferebile T)
						//  non funzionera con tipi diversi
T Sum (T a, T b)
{
	return a + b;
}

//template <class T> //  è uguale, funziona
//template <class T2, typename T1> //  non è uguale, non funziona

template <typename T1, typename T2> //  funziona con valori diversi, ma T1 ritornerà
									//  il primo tipo inserito!
T1 Sum (T1 a, T2 b)
{
	return a + b;
}

//int sum(int a, int b)
//{
//	return a + b;
//}
//
//double sum(double a, double b)  //  overloading della funzione
//{								  //  scomodo! meglio usare gli template
//	return a + b;
//}


int main() {
	setlocale(LC_ALL, "italian");
	
	
	cout << Sum(2.4f, 4.1f) << endl; //  funziona con qualsiasi tipo
	cout << Sum(5, 21) << endl;
	cout << Sum(1.1, 1.111) << endl;
	cout << Sum(1, 1.4f) << endl; 	//  non si può sommare due tipi diversi
									//  perchè la nostra T corrisponde ad un tipo solo
	
	cout << Sum(1.3f, 1.4f) << endl;    //  con T1, e T2 funziona!
	
										//  si può passare anche di tipo string
										//  ma il dev'essere una procedura
	
	return 0;
}