#include <iostream>
#include <string>

using namespace std;

//  Classi

//  Link: https://youtu.be/sHKo3wP_EW0
//  Title: Методы класса. Что такое методы в программировании. Вызов метода класса. Функции. C++ Урок #74
//  Creator: #SimpleCode

//  

class Human //  questa è una classe, tipo di dati paragonabile a int b = 10;
{
public:
	
	int age;
	float weight; //  variabili. il loro contenuto dipende dal oggetto creato
	string name;
	
	void Print() // questa procedura mostrerà i valori appartententi al oggetto
	{
		cout << "Nome: " << name << "\nPeso: " << weight << "\nEtà: " << age;
	}
};


int main() {
	setlocale(LC_ALL, "italian");
	
	Human firstHuman; //  questo è un oggetto di classe Human
	
	firstHuman.age = 30;
	firstHuman.name = "Anton Whitless";
	firstHuman.weight = 50.43f;
	
//	cout << firstHuman.age << endl;
//	cout << firstHuman.name << endl; --------v funzione di sotto equivale a questo
//	cout << firstHuman.weight << endl;
	
	firstHuman.Print(); 
	
	cout << "\n_____________________\n";
	
	Human secondHuman; //  un'altro oggetto
	
	secondHuman.age = 19;
	secondHuman.name = "Gladd Flier";
	secondHuman.weight = 67.93f;
	
//	cout << secondHuman.age << endl;
//	cout << secondHuman.name << endl;
//	cout << secondHuman.weight << endl;
	
	secondHuman.Print(); 
	
	
	return 0;
}