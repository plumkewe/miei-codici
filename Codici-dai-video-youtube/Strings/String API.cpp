#include <iostream>
#include <string>

using namespace std;

//  String API

//  Link: https://youtu.be/lTPT1cPfVmI
//  Title: C++ useful string functions
//  Creator: Bro Code

//  Non sono tutte: https://cplusplus.com/reference/string/string/


int main() {
	setlocale(LC_ALL, "italian");
	
	string first_name;

	cout << "Inserisci il tuo nome: ";
	getline(cin, first_name);
	
	int lenght = first_name.length(); //  lunghezza della stringa
	
	if (lenght >= 12) //  si può scrivere anche come first_name.lenght() >= 12
		cout << "Il tuo nome non può essere più lungo di 12 caratteri!" << endl;
	
	else
		cout << "Benvenuto " << first_name << endl;
	
	if (first_name.empty()) //  verifica se la stringa è vuota (" " != vuoto)
		cout << "Non hai inserito un nome! << endl";
	
//	first_name.clear(); //  serve per cancellare il contenuto della stringa
	
	string email = first_name.append("@gmail.com"); //  serve per aggingere una
													//  stringa ad un'altta ma 
													//  si può usare anche +=
	cout << email << endl;
	

	char letter1 = first_name.at(0);	//  per "estrare la lettera" dalla stringa
										//  che a sua volta è un array di char
										//  quindi indice 0 = 1 lettera
	
	cout << letter1 << endl;
	
	
	string nickname = first_name.substr(0, 3);  //  sottrae un range di lettere
												//  dalla stringa (da, a)
												
	cout << nickname << "123" << endl;
	
	string ciao = first_name.insert(2, "hey@"); //  aggiunge stringa ad un'naltra
												//  (dove, che cosa) 
	cout << ciao << endl;
	
	
	int posizione = first_name.find('l');	//  cerca la lettera una striga e
											//  restituisce il suo indice
											
	cout << posizione << endl;
	
	string phone_number;
	cin >> phone_number;
	
	phone_number.erase(0, 3); //  cacella una parte della stringa (da, a)
	cout << phone_number << endl;
	
	
	return 0;
}