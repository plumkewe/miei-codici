#include <iostream>

using namespace std;

//  Escape sequnces

//  Link: https://youtu.be/DY7p1IDIioM
//  Title: Escape - последовательности. Как использовать. C++ для начинающих. Урок #3.
//  Creator: #SimpleCode

//  sono \n, \b, \t, \', \\, \", \?,
//  https://stackoverflow.com/questions/7372918/whats-the-use-of-r-escape-sequence


int main() {
	setlocale(LC_ALL, "italian");
	
	cout << "\nCiao con \\n"; //  newline
	
	cout << "\n\tCiao con \\t"; // horizontal tab
	
	cout << "\nCiao con\b \\b"; //  elimina l'ultima lettera (backspace)
	
	cout << "\n\vCiao con \\v"; //  vertical tab
	
	cout << "\n\rCiao con \\r"; //  muove il cursore all'inzio, facendo così soprascrive il testo
	
//	cout << "\n\fCiao con \\f"; //  non ci serve
	
	
	return 0;
}