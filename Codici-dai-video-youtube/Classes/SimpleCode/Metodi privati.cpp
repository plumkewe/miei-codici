#include <iostream>

using namespace std;

//  Metodi privati

//  Link: https://youtu.be/oGIJG3Vc5OU
//  Title: Инкапсуляция ООП пример. private методы. Что такое инкапсуляция. C++ Для начинающих. Урок#77
//  Creator: #SimpleCode

//  

class CoffeGrinder
{
	
private:
	
	bool CheckVoltage ()
	{
		return true; //  hardcode
	}
	
	
public:
	
	void Start ()
	{
		bool VoltageIsNormal = CheckVoltage();  //  questo si può anche evitare e inserire
												//  direttamente checkvoltage nel if
		
		if (VoltageIsNormal) // si poteva scrivere == true ma dato che è un bool e l'if...
		{
			cout << "FuUUunziona";
		}
		else
		{
			cout << "Bip. Bip. Bip";
		}
		
		
	}
	
	
};


int main() {
	setlocale(LC_ALL, "italian");
	
	CoffeGrinder a;
	
	a.Start();
	
	
	return 0;
}