#include <iostream>

using namespace std;

//  

const int SIZE = 4;

struct part
{
	int model_number;
	int  part_number;
	
	float cost;
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	int n;
	part apart[SIZE];
	
	for (int n = 0; n < SIZE; n++)
	{
		cout <<  endl;
		cout << "Enter model number: "; cin >> apart[n].model_number;
		cout << "Enter part number: ";  cin >> apart[n].part_number;
		cout << "Enter cost: ";         cin >> apart[n].cost;
	}
	
	cout << endl;
	
	for (int n = 0; n < SIZE; n++)
	{
		cout << "Model " << apart[n].model_number;
		cout << " Part " << apart[n].part_number;
		cout << " Cost " << apart[n].cost 
		
		<< endl;
	}
	
	return 0;
}