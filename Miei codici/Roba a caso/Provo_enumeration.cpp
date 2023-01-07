#include <iostream>


//  Allora provo a capire l'utilità di enum, quindi guardate:

enum for_loop : int {
	
	beginning = 0,
	ending = 5
	
};


int main() {
	setlocale(LC_ALL, "italian");
	
	int Array[5] = {0, 1, 2, 3, 4};
	
	
	for (int i = beginning; i < ending; i++)
		std::cout << Array[i] << " ";
	
	
	return 0;
}