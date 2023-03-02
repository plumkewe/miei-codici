#include <iostream>

using namespace std;

//  

class Distance 
{
private:
	const float MTF;
	int feet;
	float inches;

public:
	Distance() : feet(0), inches(0), MTF(3.280833F) {}
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters;
		feet = int(fltfeet);
		inches = 12*(fltfeet-feet);
	}
	
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
	
	void getDist()
	{
		cout << "\nEnter feet: "; cin >> feet;
		cout << "Enter inches: "; cin >> inches;
	}
	
	void showDist() const { cout << feet << "\'" << inches << '\"'; }
	
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float> (feet);
		return  fracfeet/MTF;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	float mtrs;
	Distance dist1 = 2.35f;
	
	cout << "\nDist1 = "; dist1.showDist();
	mtrs = static_cast<float> (dist1);
	
	cout << "\nDist1 = " << mtrs << " meters";
	

	Distance dist2(5, 10.25);
	mtrs = dist2;
	cout << "\nDist2 = " << mtrs << " meters";
	
	
	
	return 0;
}