#include <iostream>

using namespace std;

//  Return di più valori

//  Link: https://youtu.be/wbWwDYqgtl0
//  Title: 
//  Creator: #SimpleCode

//  

void Foo (int *pa, int *pb, int *pc)
{
	(*pa) =  42;
	(*pb)	 ++;
	(*pc) = -20;
}

void Scambio (int *aa, int *bb)
{
	int term = *aa;
	*aa = *bb;
	*bb = term;
}


int main() {
	setlocale(LC_ALL, "italian");
	
	int a = 0;
	int b = 0;
	int c = 1;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	
	cout << "Foo" << endl;
	
	Foo(&a, &b, &c);
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	
// ======= lezione ====== //
	
	cout << endl;
	
	int aa = 4;
	int bb = 5;
	
	cout << "aa = " << aa << endl;
	cout << "bb = " << bb << endl;
	
	cout << "\nScambio" << endl;
	
	Scambio(&aa, &bb);
	
	cout << "aa = " << aa << endl;
	cout << "bb = " << bb << endl;
	
	
	return 0;
}