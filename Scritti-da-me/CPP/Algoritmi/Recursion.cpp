#include <iostream>

using namespace std;

//  


int countdown (int n) {
	
	cout << n << " ";
	
	if (n <= 0)
		return 0;
		
	else
		return countdown(n - 1);
	
	
}


int main() {
	setlocale(LC_ALL, "italian");
	
	countdown(10);
	
	
	return 0;
}