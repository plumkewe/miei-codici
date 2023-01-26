#include <iostream>

using namespace std;

//  

float getavg(float);


int main()
{
	setlocale(LC_ALL, "italian");
	
	float data = 1;
	float  avg ;
	
	while (data != 0 )
	{
		cout << "Enter a number: ";
		cin  >> data;
		
		avg = getavg(data);
		cout << "New average is " << avg << endl;
	}
	
	return 0;
}

float getavg (float newdata)
{
	static float total = 0; //  questa e
	static int   count = 0; //  questa aumenta
	
	count ++;
	total += newdata;
	
	return (total / count); //  quando fa return
}