#include <iostream>

using namespace std;

//  

void somma (int, int);

int main() {
	setlocale(LC_ALL, "italian");
	
	int primo, secondo;
	
	cout << "Inserisci il primo numero: ";
	cin >> primo;
	
	cout << "Inserisci il secondo: ";
	cin >> secondo;
	
	cout << "La somma del primo e secondo numero è ";
	somma (primo, secondo);
	
	
	return 0;
}


void somma (int a, int b) {
	
	int somma;
	
	somma = (a + b);
	
	
	cout << somma;
}