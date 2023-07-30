#include <iostream>

using namespace std;

//  Constructors

//  Link: https://www.youtube.com/watch?v=FXhALMsHwEY
//  Title: Constructors in C++
//  Creator: The Cherno

//  


class Entity
{
	
public:
	float X, Y;
	
//	Entity() = delete; //  se sriviamo qusto la parte di sotto verrà cancellata
	
	Entity() //  serve per inizializazzione delle classi (questa^)
	{
		X = 0.0f;
		Y = 0.0f;
	}
	
	Entity(float x, float y)
	{
		X = x;
		Y = x;
	}
	
//	void Init()  // non ci serve! ^^^
//	{
//		X = 0.0f;
//		Y = 0.0f;
//	}
	
	void Print()
	{
		cout << X << ", " << Y << endl;
	}
	
};


int main() 
{
	setlocale(LC_ALL, "italian");
	
	Entity e(10.0f, 5.5f);
//	e.Init(); //  non ci seve più
	
//	cout << e.X << endl;
	e.Print();
		
		
	Entity el;
	el.Print();
	
	
	return 0;
}