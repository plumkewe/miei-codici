#include <iostream>
#include <string>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	string s1 ("Quick! Send for Count Graystone.");
	string s2 ("Lord");
	string s3 ("Don't ");
	
	s1.erase(0, 7);  				//  toglie quick
	s1.replace(9, 5, s2);			//  mette al posto di "Count" "Lord"
	s1.replace(0, 1, "s");			//  cambia 'S' con 's'
	s1.insert(0, s3);				//  inserisce "Don't " all'inizio
	s1.erase(s1.size() -1, 1);		//  toglie '.'
	s1.append(3, '!');				//  aggiunge '!!!'
	
	int x = s1.find(' ');			//  trova lo spazio
				
	while ( x < s1.size() ) 		//  loopa se lo spazio rimane 
	{
		s1.replace(x, 1, "/");		//  cambia con/
		x = s1.find(' ');			//  trova un'altro spazio
	}
	
	cout << "s1 = " << s1 << endl;
	
	
	return 0;
}