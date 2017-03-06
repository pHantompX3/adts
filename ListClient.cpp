#include <iostream>
#include <string>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

int choice = 0 ;
int choice2 = 0;
while (choice = 0)
{

	cout << "********************************************************List Operations**********************************************************\n\n\n\n";
	cout << "Insert\t[1]"<< endl << "Remove\t[2]" << endl << "Clear\t[3]"<< endl<< "Display\t[4]" << endl << "Size\t[5]"<< endl << "getAt\t[6]";
	cout << "Exit\t[0]";
	
	cout << "Choice: ";
	cin >> choice2;
	
	if (choice2 = 0)

		return 0;
	
	if (choice2 = 1)
		cout << "enter the value you wish to add to list: ";
		cin >> int val;
		cout << "enter the position at which you wish to insert value";
		cin >> int k;
		L1.insert(int val, int k);

	if (choice2 = 2)
		cout << "enter the position at which you wish to remove the  value";
		cin >> int k;
		L1.remove(int k);

	if (choice2 = 3)

		L1.clear();

	if (choice2 = 4)

		L1.display();

	if (choice2 = 5)

		L1.clear();
	
	if (choice2 = 6)
	
		cout << L1.getAt(int k)















}
