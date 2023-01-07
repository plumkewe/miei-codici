#include <iostream>

using namespace std;

//  Arrays

//  Link: https://youtu.be/ENDaJi08jCU
//  Title: Arrays in C++
//  Creator: The Cherno

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int esempio[5]; //  una cosa molto importante è che non si può accedere al
					//  ultimo indice se si scrive esempio[5] e uguale a dire 6
					
	int* ptr = esempio;
	
	for (int i = 0; i < 5; ++i)
		esempio[i] = i;
	
	esempio[2] = 5; //  questo è uguale a:
	cout << esempio[2] << endl;
	
	*(ptr + 2) = 6; //  questo e
	cout << esempio[2] << endl;
	
	*(int*)((char*)ptr + 8) = 6; //  questo
	cout << esempio[2] << endl;
	
	int count = sizeof(esempio) / sizeof(int); //  oppure come piace di più a me
	int count2 = sizeof(esempio) / sizeof(esempio[0]);
	
	cout << count << endl;
	cout << count2 << endl;
	
	
	int* unaltro = new int[5];

	

	delete[] unaltro;
	
	return 0;
}