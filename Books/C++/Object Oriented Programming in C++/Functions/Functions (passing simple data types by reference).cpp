#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	void intfrac (float, float&, float&);
	
	float number, intpart, fracpart;
	
	do
	{
		cout << "Enter a real number: ";
		cin  >> number;
		
		intfrac(number, intpart, fracpart);
		
		cout << "Integer part is: " << intpart << ", fraction part is: " << fracpart << endl;
		
	} while ( number != 0.0 );
	
	
	return 0;
}

void intfrac (float n, float& intp, float& fracp) // & ampersand == alias
{
	long temp = static_cast<long> (n);  //  convers to long
	intp  = static_cast<float> (temp);  //  back to float
	fracp = n - intp;					//  substact the integer part
}

//  ho utilizzato il debug per vedere un po come funziona praticamente
//  il valore di n diventa num.dec00000..15 (ad esempio)
//  temp toglie tutto dopo la virgola e rimane solo int (mentre n ha sempre il valore di num.dec00000..15 francp fa num.dec00000..15 - temp (num int) e fine