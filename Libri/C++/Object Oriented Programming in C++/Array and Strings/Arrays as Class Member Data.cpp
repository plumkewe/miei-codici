#include <iostream>

using namespace std;

//  

class Stack 
{
private:
//	enum { MAX = 10 }; //  nelle verisoni più vecchie
	static const int MAX = 10; // nelle versioni più recenti
	
	int st[MAX]; 	//  stack: array of integers
	int top;		//  number of top of stack
	
public:
	Stack() { top = 0; }; //  constructor
	
	void push(int var) { st[++top] = var; };   //  put number on stack
	int pop() { return  st[top--]; };		   //  take number off stack
	
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	Stack s1;
	
	s1.push(1);
	s1.push(2);
	
	cout << "1: " << s1.pop() << endl;
	cout << "2: " << s1.pop() << endl;
	
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	
	cout << "3: " << s1.pop() << endl;
	cout << "4: " << s1.pop() << endl;
	cout << "5: " << s1.pop() << endl;
	cout << "6: " << s1.pop() << endl;
	
	
	return 0;
}