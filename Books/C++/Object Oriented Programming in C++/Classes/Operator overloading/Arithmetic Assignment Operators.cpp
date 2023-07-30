#include <iostream>

using namespace std;

//  

class Distance 
{
private:
	int feet;
	float inches;
	
public:
	Distance() : feet(0), inches(0.0) {}
	Distance(int ft, float in) : feet(ft), inches(in) {}
	
	void getDist()
	{
		cout << "\nEnter feet: "; cin >> feet;
		cout << "Enter inches: "; cin >> inches;
	}
	void showDist() const { cout << feet << "\'-" << inches << '\"'; }
	
	void operator += ( Distance );
};

void Distance::operator += (Distance d2)
{
	feet += d2.feet;
	inches += d2.inches;
	
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet ++;
	}
}


int main()
{
	setlocale(LC_ALL, "italian");
	
	Distance dist1;
	dist1.getDist();
	cout << "\ndist1 = "; dist1.showDist();
	
	Distance dist2(11, 6.25);
	cout << "\ndist2 = "; dist2.showDist();
	
	dist1 += dist2;
	cout << "\nAfter addiction";	
	cout << "\ndist1 = "; dist1.showDist();
	
	
	return 0;
}