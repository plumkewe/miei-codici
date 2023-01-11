#include <iostream>

using namespace std;

//  Distruttore

//  Link: https://youtu.be/kXng09pmfwM
//  Title: Деструктор что это. Зачем нужен деструктор класса в ООП. Деструктор с параметрами. Перегрузка. #80
//  Creator: #SimpleCode

//  esempio con i vettori 

class MyClass
{
	int* data;
	
public:
	
	MyClass (int size)
	{
		data = new int[size];
		
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
	
	}
	
	~ MyClass ()
	{
		delete[] data;
		cout << "Distruttore " << data << endl;
	}
	
};

void Foo ()
{
	cout << "Foo inizio" << endl;
	MyClass a (1);
	
	cout << "Foo fine" << endl;
}

int main() {
	setlocale(LC_ALL, "italian");
	
	Foo();
	
	
	return 0;
}