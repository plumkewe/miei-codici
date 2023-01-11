#include <iostream>

using namespace std;

//  Distruttore

//  Link: https://youtu.be/kXng09pmfwM
//  Title: Деструктор что это. Зачем нужен деструктор класса в ООП. Деструктор с параметрами. Перегрузка. #80
//  Creator: #SimpleCode

//  

class MyClass
{
	int data; //  privato di default
	
public:
	
	MyClass (int value)
	{
		data = value;
		
		cout << "Costruttore " << data << endl;
	}
	
	~ MyClass () 	//  soltanto uno per classe, non si può overloadare come i costruttori
	{				//  non ha parametri, non li può avere
		cout << "Distruttore " << data << endl;
	}				//  si attivà solo quando si esce dalla main (non si vede più)
					//  si distugono in modo inverso dall'ultimo all'primo
					
					//  nelle classi semplici come questa non ha senso, ma quando
					//  si lavora con i vettori con la memoria dinamica bisogna
					//  pensare alla liberazione delle risorse impiegato per essp
	
};

void Foo ()
{
	cout << "Foo inizio" << endl;
	MyClass a (10);
	
	cout << "Foo fine" << endl;
} //  si distuggerà qui, dopo esequzione della procedura foo

int main() {
	setlocale(LC_ALL, "italian");
	
//	MyClass a (10);
//	MyClass b (20);
	
	Foo();
	
	
	return 0;
}