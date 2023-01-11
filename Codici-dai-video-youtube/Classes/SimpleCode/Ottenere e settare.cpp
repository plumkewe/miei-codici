#include <iostream>
#include <string>

using namespace std;

//  Get/set

//  Link: https://youtu.be/1GdzmKdBf9s
//  Title: Что такое геттеры и сеттеры для класса. Методы get и set. Инкапсуляция это. Пример. C++ Урок #76
//  Creator: #SimpleCode

//  

class Point
{
public:
	
	int GetY ()
	{
		return y;
	}
	
	void SetY (int valueY)
	{
		y = valueY * 2;
	}
	
	
	int GetX ()
	{
		return x;
	}
	
	void SetX (int valueX)  //  non si può (per ora) utilizzare lo stesso paramentro
							// come il nome della variabuile x = x non va bene!
	{
		x = valueX;
	}
	
	void Print ()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
	
private: 	//  per limitare l'uso se verrà usato da qualcun altro programmatore
			//  puoi fare tutto ciò che io avevo previsto attraverso public:
	
	int x;
	int y;

	
};


int main() {
	setlocale(LC_ALL, "italian");
	
	Point a;
	
	a.SetY(10); //  possiamo stabilire dei valori alle varibili solo attraverso il set
	a.SetX(5); //  si stabilisce un valore alla variabile x di oggetto a
	
	a.Print();
	
	int result = a.GetX(); //  con il get si ottiene il valore che è presente nella x
	
	cout << result << endl;
	
	
	return 0;
}