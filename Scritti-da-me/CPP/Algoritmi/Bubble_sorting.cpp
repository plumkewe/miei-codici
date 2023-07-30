#include <iostream>

using namespace std;

//  

void bubble_sorting (int array[], int lunghezza) {

	for (int i = 0; i < lunghezza - 1; i ++)
		
		for (int j = 0; j < lunghezza - 1; j ++)
			
			if (array[j] > array[j+1])
				swap (array[j], array[j+1]);
			
}

void stampa (int array[], int lunghezza, int i) {
	
	if (i == lunghezza)
		return;
	
	cout << array[i] << " ";
	i ++;
	
	stampa(array, lunghezza, i);
	
	
}


int main() {
	setlocale(LC_ALL, "italian");
	
	int a[5] {121,21,33,2,11};
	
	cout << "Prima di bubble sorting: ";
	stampa(a, 5, 0);
	
	bubble_sorting(a, 5);

	cout << "\nDopo il bubble sorting: ";
	stampa(a, 5, 0);
	
	return 0;
}