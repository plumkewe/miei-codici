#include <iostream>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/zPi163Xo4m8
//  Title: 
//  Creator: #SimpleCode

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int a = 0;
	
	while (a < 10)  	//  se la condizione è vera verrà eseguito il codice affinche essa
						//  non diventerà falsa, importante includere una codizione che finirà
						//  il ciclo! 
	{
		cout << "Ciao, come stai " << a << endl;
		a++;
	} 					//  1 iterazione
	
	
	cout << "\n-----------------------\n" << endl;
	
	int b = 10;
	
	while (b >= 0)
	{
		cout << "Ciao, come stai " << b << endl;
		b--;
	}
	
	return 0;
}