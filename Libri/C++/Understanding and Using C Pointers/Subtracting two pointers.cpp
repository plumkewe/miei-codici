#include <iostream>

using namespace std;

//  facendo un pointer - un'unaltro troviamo la differenza tra i loro indirizzi,
//  la differnza dipende dal tipo "che il pointer ha" che dev'essere uguale al
//  al quello che sta puntando

//  https://www.learncpp.com/cpp-tutorial/pointers-and-const/

int main()
{
	setlocale(LC_ALL, "italian");
	
	int array [] = { 10, 20, 30 };
	int *p0 = array;									//  punta sempre al primo indice
	int *p1 = array + 1;								//  del array
	int *p2 = array + 2;
	
	cout << "p2 - p0 = " << p2 - p0 << endl;
	cout << "p2 - p1 = " << p2 - p1 << endl;
	cout << "p0 - p1 = " << p0 - p1 << endl;  			//  da non confondere con
	
	cout << "\n*p2 - *p1 = " << *p2 - *p1 << endl;  	//  che usa l'operatore deference
														//  e quindi fa a[2] - a[1] valori!
	
	return 0;
}