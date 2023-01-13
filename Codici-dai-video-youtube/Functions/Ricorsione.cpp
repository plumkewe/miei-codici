#include <iostream>

using namespace std;

//  Ricorsione

//  Link: https://youtu.be/_WGNSVDb0t8
//  Title: 
//  Creator: #SimpleCode

//  

//void Foo ()  //  loop infinito + crush dell programma
//{
//	Foo();
//}

int Foo(int a)
{
	if (a < 1) //  un escape case, per uscire dal loop
		return 0;
	
	a--;
	
	cout << a << endl;
	
	
	return Foo(a);
}

int main() {
	setlocale(LC_ALL, "italian");
	
	Foo(5);
	
//	while (true) //  con i cicli si può fare la stessa cosa che con la ricorsione
//	{
//
//	}
	
	
	
	return 0;
}