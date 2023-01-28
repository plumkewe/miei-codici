#include <iostream>

using namespace std;

//  

class smallobj  //  defizione della classe
{
private:
	int somedata;  //  class data
public:
	void setdada(int d)  //  funzione membro per impostare data
	{
		somedata = d;
	}
	void showdata()  //  funzione membro per visualizzare data
	{
		cout << "Data is " << somedata << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	smallobj s1, s2; //  due oggetti di classe smallobj (instance of a class)
//	  v class member access operator
	s1.setdada(1923); //  richiamo di funzione membro per assegnare il valore
	s2.setdada(1312); // "is associated with a specific object"
	
	s1.showdata(); //  richiamo di funzione per visualizzare il valore
	s2.showdata();
	
	
	return 0;
}