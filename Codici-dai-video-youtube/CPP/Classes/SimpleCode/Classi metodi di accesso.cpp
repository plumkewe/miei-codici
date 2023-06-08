#include <iostream>
#include <string>

using namespace std;

//  Classi

//  Link: https://youtu.be/77H7aRy68P8
//  Title: Модификаторы доступа классов. public private protected что это. Спецификаторы доступа. C++ Урок #75
//  Creator: #SimpleCode

// 

class Point
{
public: //  sono public fino a quando non incontrano private o protected
		//  aperto a tutti
	
	int Z;
	
	void Print ()
	{
		cout << "Y = " << Y << " X = " << X << " Y = " << Z;
		
		PrintY();
	};
	
	
private: 	//  le classi sono private di default e per questo non possiamo comunicare
			//  attraverso . però sono disponbili via classe 
	
	int X;
	int Y;
	
	void PrintY()
	{
		cout << Y;
	}
	
protected: //  ce una differenza tra private e protected ma per ora non ci interessa
	
};


int main() {
	setlocale(LC_ALL, "italian");
	
	Point a;
	
//	a.X = 1;
//	a.Y = 3;
	a.Z = 3;

	a.Print();
	
	
	return 0;
}