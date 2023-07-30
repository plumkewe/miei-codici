#include <iostream>

using namespace std;

//  

struct Distance
{
	int     feet;
	float inches;
};

struct Room
{
	Distance lenght;    //  nasted structure per utilizzare uno di questi membri
	Distance  width;    //  bisogna includere anche quelli presenti al di sopra
};						//  non possiamo scrivere dining.lenght senza .feet!


int main()
{
	setlocale(LC_ALL, "italian");
	
	Room dining;
	
	dining.lenght.feet    = 13; //  si va indietro room >> lenght >> feet!
	dining.lenght.inches  = 6.5;
	dining.width.feet     = 10;
	dining.width.inches   = 0.0;
	
//	possiamo anche inizializzare nasted structures in questo modo
	
//	Room dining = { {13, 6.5}, {10, 0.0} };  tra {} e divisi con , 
	
	float l = dining.lenght.feet + dining.lenght.inches / 12;
	float w = dining.width.feet  + dining.width.inches  / 12;
	
	cout << "Dining room area is " << l * w << " square feet" << endl;
	
	
	return 0;
}