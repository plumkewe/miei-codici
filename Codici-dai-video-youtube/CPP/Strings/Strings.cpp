#include <iostream>
#include <string> //  bisogna includere il haeder

using namespace std;

//  Strings

//  Link: https://youtu.be/ijIxcB9qjaU
//  Title: How Strings Work in C++ (and how to use them)
//  Creator: The Cherno

//  std::string API: https://cplusplus.com/reference/string/string/

//  ASCII, encoding

void PrintString (const string& string) { //  dato che quando si passa senza &
										  //  il valore viene copiato, e dato
										  //  che la copiatura di string richede
										  //  molto tempo va passata come 
										  //  reference
	
	cout << string << endl;
	
}

int main() {
	setlocale(LC_ALL, "italian");
	
	const char* name = "Antonio"; //  solitamente quando si inizializza un char
								  //  non si può modificare quindi puoi usarlo
	
	char name2[7] = { 'A', 'n', 't', 'o', 'i', 'o', '\0'}; //  bisogna scrivere
														   //  \0 che sta a dire
														   //  dove finisce il a
															
	string name3 = "Antonnnio"; //  non si puó scrivere ciao + hello in questo
								//  modo: string cia = "ciao" + "hello"; ma
								//  per farlo funzionare bisogna fare cosi:
								
	name3 += ", ciao"; //  oppure:
	
	string ciao = string ("Ciao") + " hello";
	
	
	bool contiene = name3.find("nio") != string::npos; //  per sapere se
													   //  se contiene un
													   //  qualcosa si usa
													   //  questo.
															
	cout << name << endl;
	cout << name2 << endl;
	cout << name3 << endl;
	cout << ciao << endl;
	cout << contiene << endl;
	
	PrintString(ciao);
	
	return 0;
}

//  string è solo un array dei caratteri. string è una collezione di caratteri.