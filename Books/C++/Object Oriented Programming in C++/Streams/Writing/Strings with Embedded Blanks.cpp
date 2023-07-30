#include <fstream>
#include <iostream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	ofstream outfile("TESTO.txt");
	
	outfile << "Ciao come stai, io sto bene!\n";
	outfile << "Tutto a posto, gioco a scacchi.\n";
	outfile << "Perfetto, anche io!\n";
	
	
	const int MAX = 80;
	char buffer[MAX];
	ifstream infile("TESTO.txt");
	
	while ( !infile.eof() )
	{
		infile.getline(buffer, MAX);
		cout << buffer << endl;
	}
	
	return 0;
}