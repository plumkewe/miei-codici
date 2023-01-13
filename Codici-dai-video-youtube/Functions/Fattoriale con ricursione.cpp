#include <iostream>

using namespace std;

//  Fattoriale

//  Link: 
//  Title: 
//  Creator: #SimpleCode

//  

int Fattoriale (int N)
{
	if (N == 0)
		return 0;
	
	if (N == 1)
		return 1;
	
	return N * Fattoriale(N - 1); //  in breve 
}


int main() {
	setlocale(LC_ALL, "italian");
	
	cout << Fattoriale(5) << endl;
	
	
	return 0;
}