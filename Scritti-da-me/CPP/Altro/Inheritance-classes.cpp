#include <iostream>
#include <string>

using namespace std;

//  è una funzione base di OOP, molto utile e va a mano con DRY (do not repeat yourself)
//  permette di creare delle subclassi chiamate child class o derived class e la classe 
//  principale parent class o base class.
//  praticamente la child class gode di tutti metodi della parent classe + quelle della
//  child classe stessa

class Umano 
{
private:
	string nome;
public:
	void setName ()
	{
		cout << "Inserisci il nome: ";
		getline(cin, nome);
	}
	void getName ()
	{
		cout << "Nome = " << nome << endl;
	}
};

class Possedimenti : public Umano
{
private:
	string beni_mobili;
public:
	void setBeniMobili ()
	{
		cout << "Che bene mobile è: ";
		getline(cin, beni_mobili);
	}
	void getBeniMobili ()
	{
		cout << beni_mobili << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	cout << sizeof(Possedimenti) << endl; //  sono 48 (24 + 24 bytes == 2string)
	cout << sizeof(Umano) << endl;  //  sono 24
	
	Umano um;
	
	um.setName();
	um.getName();
	
	Possedimenti pos;
	pos.setName();
	pos.setBeniMobili();
	pos.getBeniMobili();
		
	
	return 0;
}