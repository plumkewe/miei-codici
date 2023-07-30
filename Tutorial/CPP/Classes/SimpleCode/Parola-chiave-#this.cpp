#include <iostream>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/2rv_s1j5pHE
//  Title: Ключевое слово this в ООП. Что означает. Что это такое. Для чего нужен this указатель C++ #81
//  Creator: #SimpleCode

//  


class Point
{
public:
	
	Point ()
	{
		x = 0;
		y = 0;
		
		cout << this << " costruttore"; //  possiamo utilizzare la parola chiave this
										//  soltanto nella classe stessa, non fuori
										
	}
										//  this ci da il indirizzo
	
	Point (int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		
		cout << this << " costruttore" << endl;
	}
	
	int GetY ()
	{
		return y;
	}
	
	void SetY (int y)	//  non si può fare cosi perhè pensa che vogliamo assegnare
						//  il valore della y alla y. ma con this lo si può fare
	{
		this -> y = y;  //  lo si usava di già, ma lo faceva il nostro compilatore (a.print, b.print)
	}
	
	
	int GetX ()
	{
		return x;
	}
	
	void SetX (int valueX)  
	{
		x = valueX;
	}
	
	void Print ()
	{
		cout << "\nX = " << x << "\t Y = " << y << endl << endl;
	}
	
private: 
	
	int x;
	int y;
	
	
};


int main() {
	setlocale(LC_ALL, "italian");
	
	Point a;
	a.SetY(5);
	a.Print(); 	//  questo oggetto si trova in una determinata possizione nella memoria
	
	
	return 0;
}