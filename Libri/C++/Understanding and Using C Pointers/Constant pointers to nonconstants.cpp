#include <iostream>

using namespace std;

//  https://www.learncpp.com/cpp-tutorial/pointers-and-const/


int main()
{
	setlocale(LC_ALL, "italian");
	
	int num;
	int *const cpn = &num;  //  non possiamo cambiere il pointer ma
							//  ma la data alla quale sta puntado, la si può
	const int limit = 500;
	
	*cpn = limit; //  possiamo deferenciare e assegnare il valore a ciò che il cpn sta "puntando" (&num) che non è const
	*cpn = 21;
	
	//  ma non possiamo fare questo:
	
//	int *const cpn = &limit;  //  da quel che ho capito da questo non si può fare const int con int *const. si vuole che le const rimangono invariate 
	
//	int age; //  dopo aver assegnato un indirizzo a cpn non possiamo assegnare un nuovo valore come:
//	cpn = &age;
	
	
	return 0;
}