#include <iostream>
#include <cstring>

using namespace std;

//  

class part
{
private:
	
	char   part_name[30];
	int    part_number;
	double cost;
	
	
public:
	
	void SetPart (char pname[], int pn, double c)
	{
		strcpy(part_name, pname);
		part_number = pn;
		cost = c;
	}
	void ShowPart ()
	{
		cout << "\nName = " << part_name;
		cout << "Number = " << part_number;
		cout << "Cost = €"  << cost;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	part part1, part2;
	
	part1.SetPart("ciao ciao", 21, 314.31);
	part2.SetPart("Adddddd", 13, 3.23); //  in c++11 non si potrebbe fare ma vabbe
	
	cout << "\nFirst part: "; part1.ShowPart();
	cout << "\nSecond part: "; part2.ShowPart();
	
	
	return 0;
}