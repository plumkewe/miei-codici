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
	Distance add_dist(Distance);
};

Distance Distance::add_dist(Distance d2)
{
	Distance temp;
	
	temp.inches = inches + d2.inches;
	
	if (temp.inches >= 12)
	{
		temp.inches -= 12.0;
		temp.feet   =  1;
	}
	temp.feet += feet + d2.feet;
	
	
	return temp;
}

int main()
{
	setlocale(LC_ALL, "italian");
	
	Distance dist1, dist3;
	Distance dist2(11, 6.25);
	
	dist1.getdist();
	dist3 = dist1.add_dist(dist2);
	
	cout << "\ndist1 =";
	dist1.showdist();
	cout << "\ndist2 =";
	dist2.showdist();
	cout << "\ndist3 =";
	dist3.showdist();

	
	return 0;
}