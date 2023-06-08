#include <iostream>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/v_ZdslCeRfQ
//  Title: 
//  Creator: #SimpleCode

//  


int main() 
{
	setlocale(LC_ALL, "italian");
	
	int i = 0;
	
	for ( ; i < 10; i++) 	//  si può omettere l'inizializazzione in modo che essa
							//  si possa usare in unaltrò ciclo, l'incremento modifica
							//  la variablie, il ; è obbligatorio
	{
		cout << "Ciao " << i << endl;
	}
	
	for ( ; i < 20; i++)
	{
		cout << "Ciao " << i << endl;
	}
	
	for ( ; i < 20 ; )  //  si puo omettere anche lincremento, ma bisogna sempre mettere 
						//  il ; il funzionamento del ciclo sarà diverso
	{
		cout << "Ciao " << i << endl;
		i++;
	}
	
	for (int i = 0 ; ; i++) //  si può omettere anche la condizione, ci sarà un ciclo infinito 
	{
		cout << "Ciao " << i << endl;
	}
	
	for ( ; ; ) //  loop infinito 
	{
		cout << "Ciao " << i << endl;
	}
	
	for (int i = 0, j = 10; (i < 10) && (j != 5); i++, j--)
	{
		cout << "Ciao i " << i << endl;
		cout << "Ciao j " << i << endl;
	}
	
	
	return 0;
}