#include <iostream>
#include <vector>

using namespace std;

//  Dynamic Array

//  Link: https://youtu.be/PocJ5jXv8No
//  Title: Dynamic Array in C++
//  Creator: The Cherno

//  More: https://en.cppreference.com/w/cpp/container/vector

//  Dynamic array, "grandezza" dinamica, praticamente quando crei un vettore e
//  prevedi di inserire 10 elementi ma ne inserisci >10 allora questo che fa
//  lo copia in uno nuovo più grande e cancella quello vecchio. sono uno dopo
//  altro, non sono sparsi nella memoria. quando si usano sgring è meglio usare
//  un pointer.

void funzione (const vector<int>& numeri) { //  se non si vuole modificarlo
											//  si agginge const e per non
											//  copiarlo lo si passa per & ref
	
};

int main() {
	setlocale(LC_ALL, "italian");
	
	vector<int> numeri, numeri2{ 8, 9, 10 };
	numeri.push_back(1); //  puoi aggingere solo un valore alla volta (dipende)
	
	numeri.insert(numeri.end(), { 2, 3, 4, 5, 6, 7 }); // utilizzando insert si
	
	
	numeri.erase(numeri.begin() + 4);   //  in questo modo cancella il valore ad
										//  un indice specifico in questo caso 4
										
	cout << numeri.front() << endl; //  accede al primo elemento
	cout << numeri.back() << endl; //  accede all'ultimo elemento
	cout << numeri.at(2) << endl; //  accede al elemento x (1 = 0)
	
	
	for (int i = 0; i < numeri.size(); i++)
		cout << numeri[i] << " ";
	
	cout << endl;
	
	numeri.pop_back(); //  elimina l'ultimo elemento del vettore
	numeri.swap(numeri2); //  scambia i due vettori
	
	
	for (int indice : numeri)	//  si possono usare i range based loops
								//  molto bene!
		cout << indice << " ";
	
	
	cout << endl;
	
	
	for (int indice : numeri2)
		cout << indice << " ";
	
	
	numeri.clear(); //  cancella tutti i valori è la sua grandezza diventa 0
	
	
//	cin.get(); //  per non far chiudere la console su win
	return 0;
}