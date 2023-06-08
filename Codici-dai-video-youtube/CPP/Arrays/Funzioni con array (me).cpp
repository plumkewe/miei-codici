#include <iostream>
#include <string>
#include <array> //  swap, sort, size (front, back)
#include <algorithm> //  max_element, min_element, reverse
#include <functional> //  greater
#include <numeric> //  accumulate

using namespace std;

//  

//  stampare un qualsiasi array di 10 indici

template <typename T>

void stampa (const array<T, 10> nome_array, int i)
{
	if (i == nome_array.size())
		return;
	
	cout << nome_array[i] << " ";
	i ++;
	
	
	stampa(nome_array, i);
}




int main() {
	setlocale(LC_ALL, "italian");
	
	array<int, 10> numeri = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	stampa<int>(numeri, 0);
	
	cout << endl;
	
	//  stampare solo i numeri pari
	
	for (const int indice : numeri)
		{
			if (numeri[indice] % 2 == 0)  //  3 per i numeri dispari
				continue;
			
			cout << indice << " ";
		}
	
	array<string, 10> stringhe = { "ciao", "hello", "hallo", "hola" };
	
	cout << endl;
	
	stampa<string>(stringhe, 0);
	
	
	numeri = { 4, 2, 1, 6, 9, 5, 7, 10, 9, 8 };
	stringhe = { "Baka", "Anna", "Claus", "Dendi", "Sus", "Amongus", "Keke", "Nunu", "Kappa", "Plimp"};
	
	//  in ordine crescente
	
	sort (numeri.begin(), numeri.end()); 
	sort (stringhe.begin(), stringhe.end());
	
	cout << endl;
	
	for (const int indice : numeri)
		cout << indice << " ";
	
	cout << endl;
	
	for (const string indice : stringhe)
		cout << indice << " ";
	
	//  in oridne decrescente
	
	cout << "In ordine decrescente: ";
	
	sort (numeri.begin(), numeri.end(), greater<int>());
	
	for (const int indice : numeri)
		cout << indice << " ";
	
	//  la funzionalità di invertire l'array
	
	numeri = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "\nPrima dello swap: ";
	
	for (const int indice : numeri)
		cout << indice << " ";
	
	for (int i = 9, j = 0; j < 5; i--, j++){
		
		swap(numeri[i], numeri[j]);
		
	}
	
	cout << "\nDopo lo swap: ";
	
	for (const int indice : numeri)
		cout << indice << " ";
	
	//  un'altra funzionw per invertire l'array
	
	cout << "\nInverzione dell'array con reverse: ";
	
	reverse (numeri.begin(), numeri.end());
	for (const int indice : numeri)
		cout << indice << " ";
	
	//  il massimo
	
	int* massimo = max_element(numeri.begin(), numeri.end());
	cout << "\nIl massimo numero: " << *massimo;
	
	//  il minimo
	
	int* minimo = min_element(numeri.begin(), numeri.end());
	cout << "\nIl minimo numero: " << *minimo;
	
	//  soma di un array
	
	const double sum = accumulate(numeri.begin(), numeri.end(), 0);
	cout << "\nLa somma è pari a: "<< sum;
	
	
	
	return 0;
}