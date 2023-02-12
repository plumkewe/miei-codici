#include <iostream>

using namespace std;

//  

class Distance 
{
private:
	
	int     feet;
	float inches;
	
	
public:
	
	void getDist()
	{
		cout << "\n   Enter feet: ";   cin >> feet;
		cout << "   Enter inches: ";   cin >> inches;
	}
	void showDist() const { cout << feet << "'-" << inches << '"'; };
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	const int MAX = 5;
	
	Distance dist[MAX];
	int n = 0;
	
	char ans;
	
	do
	{
		cout << "Enter distance number " << n +1;
		dist[n++].getDist();  //  store distance in array
		
		cout << "Enter another (y/n) ?: ";
		cin  >>  ans;
		
		cout << endl;
		
		if ( n >= MAX ) { cout << "The array is full!!!" << endl; break; }
		
	} while ( ans != 'n' );
	
	for (int i = 0; i < n; i++) //  display all distance
	{
		cout << "\nDistance number " << i +1 << " is ";
		dist[i].showDist();
	}
	
	
	return 0;
}