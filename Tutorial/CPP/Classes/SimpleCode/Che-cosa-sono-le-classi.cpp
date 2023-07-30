#include <iostream>
#include <string>

using namespace std;

//  Classi

//  Link: https://youtu.be/ULpr1Z0WEtQ
//  Title: Что такое класс. Что такое объект класса. Экземпляр класса это. Класс ООП это. Урок #73
//  Creator: #SimpleCode

//  

class Human //  questa è una classe
{
public:
	
	int age;
	float weight;
	string name;
};


int main() {
	setlocale(LC_ALL, "italian");
	
	Human firstHuman; //  questo è un oggetto di classe Human
	
	firstHuman.age = 30;
	firstHuman.name = "Anton Whitless";
	firstHuman.weight = 50.43f;
	
	cout << firstHuman.age << endl;
	cout << firstHuman.name << endl;
	cout << firstHuman.weight << endl;
	
	cout << "\n_____________________\n";
	
	Human secondHuman; //  un'altro oggetto
	
	secondHuman.age = 19;
	secondHuman.name = "Gladd Flier";
	secondHuman.weight = 67.93f;
	
	cout << secondHuman.age << endl;
	cout << secondHuman.name << endl;
	cout << secondHuman.weight << endl;
	
	
	return 0;
}