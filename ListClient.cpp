#include <iostream>
#include <string>
#include <limits>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "List.h"

using namespace std;
void PressEnterToContinue()
	{
		char jk = 0;
		cout <<  "\n\n\n\nType a Character then Press ENTER to continue... " << flush;
		
		while(jk == 0)
		{	
			cin >> jk;
			if (jk != 0)
			{break;}
		}
	}

int main()
{
List L1, L2;
cout << string (40, '\n');
 //Do some stuff with L1, L2, ...
 // ...
cout << "*************************************************************List Operations**********************************************************\n\n\n\n";
int choice = 0;
int choice2 = 0;
while (choice == 0)
{
int x = 0;
	
	cout << "Insert\t[1]"<< endl << "Remove\t[2]" << endl << "Clear\t[3]"<< endl<< "Display\t[4]" << endl << "Size\t[5]"<< endl << "getAt\t[6]" << endl << "Exit\t[0]"<< endl << endl << "Choice: ";
	cin >> choice2;
	
	if (choice2 == 0)
		return 0;
	
	if (choice2 == 1)
	{	
		int val;
		val = 0;
		int k = 0;
		cout << "enter the value you wish to add to list: ";
		cin >> val;
		cout << "enter the position at which you wish to insert value";
		cin >> k;
		L1.insert(val,k);

	}

	if (choice2 == 2)
	{
		int k = 0;
		cout << "enter the position at which you wish to remove the  value";
		cin >> k;
		L1.remove(k);
	}

	if (choice2 == 3)
	{
		L1.clear();
	}
	if (choice2 == 4)
	{
		cout << endl <<endl; 
		L1.display();
		PressEnterToContinue();
					
	}
	if (choice2 == 5)
	{
		cout<< endl << endl << endl << "the list currently has in " << L1.size() << " elements";
		
	}
	if (choice2 == 6)
	{	int k;
		cout << "Which value would you like to get (position in list): ";
		cin >> k;
		cout << endl << endl << "the value at position " << k <<"is: " << L1.getAt(k);
	
	}
x++;

cout << string (40, '\n');
if (x > 0) {
cout << "*************************************************************List Operations**********************************************************\n\n\n\n";
}

}
}
