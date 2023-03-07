#include <fstream>

using namespace std;

//  


int main()
{
	setlocale(LC_ALL, "italian");
	
	ofstream outfile("TESTO.txt");
	
	outfile << "Ciao come stai, io sto bene!\n";
	outfile << "Tutto a posto, gioco a scacchi.\n";
	outfile << "Perfetto, anche io!\n";
	
	
	return 0;
}