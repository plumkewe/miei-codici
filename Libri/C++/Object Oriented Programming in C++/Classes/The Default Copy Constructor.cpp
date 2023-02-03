#include <iostream>

using namespace std;

//  

class Distance 
{
private:
	int     feet;
	float inches;
	
public:
	Distance() : feet(0), inches(0) {};
	Distance(int ft, float in) : feet(ft), inches(in) {}
	
	void getdist()
	{
		cout << "Enter feet: ";
		cin  >>  feet;
		
		cout << "Enter inches: ";
		cin  >>  inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	Distance dist1(11, 6.25);
	Distance dist2(dist1);  //  vuol dire la stessa cosa
	Distance dist3 = dist1;  //  = non vuol dire assegno ma default copy constructor
	
	cout << "dist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	
	
	return 0;
}