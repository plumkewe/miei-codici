#include <iostream>
#include <conio.h>

using namespace std;

//  non funziona perchè non ho il head conio.h

enum itsaWord
{
	NO,
	YES
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	itsaWord isWord = NO;
	
	char     ch = 'a';
	int wordcount = 0;
	
	cout << "Enter your phrase:\n";
	
	do
	{
		ch = getche();
		if (ch == ' ' || ch == '\r')
		{
			if (isWord == YES) //  si poteva scrivere isWord senza == yes
			{
				wordcount++;
				isWord = NO;
			}
		}
		else if (isWord == NO)  //  si poteva scrivere !isWord
			isWord = YES;
		
	} while (ch != '\r');
	
	cout << "\n---Word count is " << wordcount << "---\n";
	
	
	return 0;
}