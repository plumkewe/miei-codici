#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

//  Sorting

//  Link: https://youtu.be/x0uUKWJzSO4
//  Title: Sorting in C++
//  Creator: The Cherno

//  sort si può utilizzare con qualsiasi tipo, string, int, char...


int main() {
	setlocale(LC_ALL, "italian");
	
	vector <int> valori = {4, 10, 3, 2, 5, 1};

	sort(valori.begin(), valori.end()); //  funziona con STD::VECTOR, STD::ARRAY	
										//  "non funzion" con array normali 
										//  in questo modo ordiniamo da 0-n
										
	sort(valori.begin(), valori.end(), [](int a, int b) { //  è uguale a ^^^
		
		return a < b;
		
	});
	
	sort(valori.begin(), valori.end(), greater<int>()); //  in questo modo da n-0
	
	sort(valori.begin(), valori.end(), [](int a, int b) { //  è uguale a ^^^
		
		return a > b;
		
	});
	
	sort(valori.begin(), valori.end(), [](int a, int b) {
		
		if (a == 1)
			return false; //  dopo (ultimo)
		
		if (b == 1)
			return true; //  prima (prima)
		
		return a > b;
		
	});
	
	for (int indice : valori)
		cout << indice << endl;
	
	
	cin.get();
}