#include <iostream>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/HjaCTX4WAmI
//  Title: 
//  Creator: #SimpleCode

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	for (int i = 0; i < 5; i++) //  quando questo funziona una volta
	{
		cout << "Gu " << i << endl;
		
		for (int j = 0; j < 5; j++) //  questo funziona e fa tutte le iterazioni
		{
			cout << "\tFu " << j << endl;
		}
		
	}

	
	return 0;
}