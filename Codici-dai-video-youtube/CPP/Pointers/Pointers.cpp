#include <iostream>

using namespace std;

//  Pointers

//  Link: https://youtu.be/DTxHyVn0ODg
//  Title: Pointers in C++
//  Creator: The Cherno

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	void* ptr = 0; //  è uguale a:
	void* ptr1 = NULL; //  o
	void* ptr2 = nullptr; //  o
	
	int var = 8;
	void* ptr3 = &var; //  è uguale a int* ptr3 = &var; e
	double* ptr4 = (double*)&var; //  poineters sono sempre di tipo int (4 byte)
	
	
	int* ptr5 = &var;
	*ptr5 = 10; //  scriviamo a var il valore di 10
	
	cout << *ptr5;
	
	
	char* buffer = new char[8]; //  8 bytes, uno accanto ad altro
	memset (buffer, 0, 8);
	
	char** ptr6 = &buffer;
	
	delete[] buffer;
	
	
	return 0;
}