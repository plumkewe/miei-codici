#include <iostream>

using namespace std;

//  https://www.programiz.com/cpp-programming/operator-overloading

class Numeri
{
private:
	int numero1, numero2;
	
public:
	Numeri() : numero1(0), numero2(0) {}
	
	void setNumeri (int a, int b)
	{
		numero1 = a;
		numero2 = b;
	}
	
	void getNumeri ()
	{
		cout << "a = " << numero1 << endl;
		cout << "b = " << numero2 << endl;
	}
	
	Numeri operator + (const Numeri& sommare) //  praticamente unico modo di farlo, a quanto pare
	{
		Numeri risultato;
		risultato.numero1 = numero1 + sommare.numero1;
		risultato.numero2 = numero2 + sommare.numero2;
		
		return risultato;
	}
	
	Numeri operator ++ () 
	{
		Numeri temp;
		temp.numero1 = ++numero1;
		temp.numero2 = ++numero2;
		
		return temp;
	}
};



int main()
{
	setlocale(LC_ALL, "italian");
	
	Numeri uno, due, somma;
	
	uno.setNumeri(10, 20);
	due.setNumeri(3, 3);
	
	somma = uno + due;
	
	somma.getNumeri();
	
	++uno;
	uno.getNumeri();
	
	
	return 0;
}