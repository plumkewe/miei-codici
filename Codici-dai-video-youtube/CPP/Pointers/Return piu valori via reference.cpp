#include <iostream>

using namespace std;

//  

//  Link: https://youtu.be/7btUwxD4V5s
//  Title: 
//  Creator: #SimpleCode

//  

void Foo (int &a, int &b, int &c) //  lavorano con indirizzi delle variabili
{
	a =  10; //  in questo modo li cambiamo, e NON si copiano ma si cambiano!
	b *= 2;
	c -= 100;
} //  la funzione deve fare solo una cosa e non di più. 


int main() {
	setlocale(LC_ALL, "italian");
	
	int a = 3;
	int b = 3;
	int c = 200;
	
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	
	cout << "Foo" << endl;
	Foo(a, b, c);
	
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	
	
	return 0;
}