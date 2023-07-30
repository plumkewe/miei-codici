#include <iostream>

using namespace std;

//  Overloading classes

//  Link: https://youtu.be/sLQLUed6izY
//  Title: Перегрузка конструкторов класса. Что такое перегрузка. Как перегрузить конструктор. Урок#79
//  Creator: #SimpleCode

//  

class Point
{
public:
	
	Point () //  default 
	{
		x = 0;
		y = 0;
	}
	
	Point (int valueX, int valueY)  //  questa parte è sempre inculusa nelle classi
									//	ma di base non fa nulla è vuoto
	{								//  overloading 
		x = valueX;
		y = valueY;
	}
	
	Point (int valueX, bool boolean)
	{
		x = valueX;
		
		if (boolean)
		{
			y = 1;
		} 
		else 
		{
			y = - 1;
		}
		
	}
	
	void Print ()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
	
private:
	
	int x;
	int y;
	
};


int main() {
	setlocale(LC_ALL, "italian");
	
	Point a;
	a.Print();
	
	Point b (18, 40); //  non si può fare senza overloading
	b.Print();
	
	Point c (10, true); //  si possono fare diversi costruttori ma devono avere un senso
						//  per quella classe li, e non come questo che è inutille 
	c.Print();
	
	
	return 0;
}