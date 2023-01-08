#include <iostream>
#include <algorithm>
#include <array>


//  Untitled.cpp

//  Link: 
//  Title: 
//  Creator: io

//  bho non avevo nulla da fare, alla fine vector >> array ha un API più flessibile


int riempire (std::array <int, 10> &nome, int i) {
	
	std::cout << "Inserisci il numero " << i + 1 << ": ";
	std::cin >> nome[i];

	if (i == (nome.size() - 1))
		return 0;
	
	else
		return riempire (nome, ++i);
}


void stampare (std::array <int, 10> &nome, int i) {
	
	if (i == nome.size())
		return;
	
	std::cout << nome[i] << " ";
	i ++;
	
	stampare (nome, i);
}


int main() {
	setlocale(LC_ALL, "italian");
	
	std::array <int, 10> numeri;
	
	riempire(numeri, 0);
	
	
	std::cout << '\n' << "Prima" << std::endl;
	stampare(numeri, 0);
	
	std::cout << std::endl;
	
	
	std::sort(numeri.begin(), numeri.end());
	
	
	std::cout << '\n' << "Dopo sort()" << std::endl;
	stampare(numeri, 0);
	
	std::cout << std::endl;
		
	std::cout << "\nIl primo elemento è " << numeri.front() << '.';
	std::cout << "\nL'ultimo elemento è " << numeri.back() << '.';
	std::cout << "\nElemento che si trova alla 4 posizione è " << numeri.at(3) << '.';
	
	numeri.fill(0);
	
	std::cout << "\nDopo aver riempito di valore 0: ";
	stampare(numeri, 0);
	
	
	return 0;
}
