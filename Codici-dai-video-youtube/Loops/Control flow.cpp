#include <iostream>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/a3IZ8WaIFAA
//  Title: Control flow in C++ (continue, break, return)
//  Creator: The Cherno

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	for (int i = 0; i < 10; i++) {
		
		if (i % 3 == 0) //  stampera i valori pari e saltera quelli dispari
			continue;   //  è come dire se la condizione è vera salta, vai avanti
		
		if (i > 2)  //  in questo caso vuol dire di saltare alla prossima
				    //  iterazione 
		continue;
		
		if ((i + 1) % 2 == 0)
			break; //  quando la condizione risulterà vera il programma andrà
				   //  avanti uscendo dal loop completamente!
		
		if ((i + 1) % 2 == 0)
			return 0; //  se la condizione è vera il programma finira qui!
					  //  si uscirà dalla funzione in questo caso MAIN
		
		cout << i << endl;
		
	}
	
	
	return 0;
}