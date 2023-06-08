#include <iostream>
#include <string>

using namespace std;

//  Classi

//  Link: https://youtu.be/ULpr1Z0WEtQ
//  Title: Что такое класс. Что такое объект класса. Экземпляр класса это. Класс ООП это. Урок #73
//  Creator: #SimpleCode

//  esempio 2

class Point
{
public:
	
	int X;
	int Y;
	int Z;
	
};


int main() {
	setlocale(LC_ALL, "italian");
	
	Point a;
	
	a.X = 1;
	a.Y = 3;
	a.Z = 4;
	
	
	return 0;
}