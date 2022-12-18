#include <iostream>

using namespace std;

//  

void inserire (int[], int);
void mostrare (int[], int);


int main() {
	setlocale(LC_ALL, "italian");
	
	int array[10];
	
	
	inserire(array, 10);
	
	cout << "\nMostro i valori che hai inserito nel array: ";
	mostrare(array, 10);
	
	
	return 0;
}


void inserire (int array[], int quanti) {
	
	for (int i = 0; i < quanti; ++i) {
		
		cout << "Inserisci il tuo " << i + 1 << " numero: ";
		cin >> array[i];
		
	}
	
	
}


void mostrare (int array[], int quanti) {
	
	for (int i = 0; i < quanti; ++i) {
		
		cout << array[i] << " ";
		
	}
	

}