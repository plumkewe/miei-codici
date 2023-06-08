#include <iostream>

using namespace std;

//  Passaggio nella funzione

//  Link: https://youtu.be/r1wWlUCZW08
//  Title: 
//  Creator: #SimpleCode

//  

void FillArray (int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray (const int arr[], const int size) 	//  con gli array non STD:: bisogna
													//  sempre passare anche la sua lunghezza
{
	for (int i = 0; i < size; i++)					//  sizeof nwlle funzioni non funziona
		{											//  perchè passa il primo[0] elemento dell'array
			cout << arr[i] << " ";
		}
}

int main() {
	setlocale(LC_ALL, "italian");
	
	const int SIZE = 10;
	
	
	int arr[SIZE];
	
	FillArray (arr, SIZE);
	PrintArray (arr, SIZE);
	
	
	return 0;
}