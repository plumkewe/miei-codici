#include <iostream>
#include <functional>

using namespace std;

//  parametri predefiniti

//  Link: https://youtu.be/Y0g3cIkCKtw
//  Title: 
//  Creator: #SimpleCode

//  li mettiamo, ad esempio abbiamo due parametri ma ne diamo soltanto uno funzionerà
//  ugualmente, davvero bello!

void foo (int a = 5, double b = 0.5)	//  valore default 5, funzionerà ugualemente
{										//  se non ne passiamo nessuno
	for (int i = 0; i < a; i++)			//  possiamo metterli diversi
	{									//  pero hanno un limite:
		cout << "*" << endl;			//  se si assegna un valore predefinito
	}									//  ma vogliamo avere un parametro senza
										//  bisogna metterlo prima!
	cout << b << endl;
}


int main() {
	setlocale(LC_ALL, "italian");
	
	foo(3);
	
	cout << "\n----------------\n" << endl;

	foo();  //  si, si potrebbe passare solo il secondo argomento e non il primo
			//  utilizzando std::bind (functionak) ma deh non ciò capito come si fa

	return 0;
}