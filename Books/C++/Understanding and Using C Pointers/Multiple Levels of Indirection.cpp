#include <iostream>
#include <string>

using namespace std;

//  questa è una funzionalita mega utile, praticamente per non copiare gli valori
//  si può puntaro un pointer ad un'altro. più puntatori possono puntare ad lo
//  stesso indirizzo

//  https://www.learncpp.com/cpp-tutorial/pointers-and-const/

int main()
{
	setlocale(LC_ALL, "italian");
	
	char *titoli [] = {"Viola", "Piccolo principe", "Grande principe", "Medio principe", "Corto principe", "Nano principe", "Mega principle" }; //  in C++11 non si può fare ma vabbe, anche perchè è c-styled string array
	
	char **migliori_libri 	[3];
	char **libri_inglesi	[4]; //  questa scrittura sta a dire che è un pointer to a pointer of char
	char **super			[4]; //  questa scrittura sta a dire che è un pointer to a pointer of char
	
	migliori_libri[0] = &titoli[0];
	migliori_libri[1] = &titoli[3];
	migliori_libri[2] = &titoli[2];
	
	libri_inglesi[0]	 = &titoli[0];
	libri_inglesi[1]	 = &titoli[6];
	libri_inglesi[2]	 = &titoli[3];
	libri_inglesi[3]	 = &titoli[1];
	
	cout << *libri_inglesi[0] << endl;
	cout << *migliori_libri[0] << endl;
	
	
	return 0;
}