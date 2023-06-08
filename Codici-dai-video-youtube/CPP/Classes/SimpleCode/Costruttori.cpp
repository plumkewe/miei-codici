#include <iostream>
#include <string>

using namespace std;

//  Costruttori

//  Link: https://youtu.be/OvzACnP7h9E
//  Title: Конструктор класса пример. Зачем нужен. Конструктор с параметрами. Конструктор по умолчанию. Урок#78
//  Creator: #SimpleCode

//  

class Point
{
public:
	
	Point (int valueX, int valueY)  //  questa "inizializzazione" ce sempre solo che in
									//  questo modo lo facciamo come vogliamo noi
	{
		x = valueX;
		y = valueY;
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
	
	Point a (4, 6);
	
	a.Print();
	
	
	Point b (4, 8);
	
	b.Print();
	
	
	return 0;
}