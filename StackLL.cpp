#include "StackLL.h"
#include <iostream>
#include <stdexcept>
#include <unistd.h>

using namespace std;


class Stack::Node
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	  
	};

Stack::~Stack()
{
    while(num_elements > 0)
     pop();
}
	
int Stack::size()
 {
    return num_elements;
 }

void Stack::push(int val)

{

	Node* newPtr = new Node{val};
	
	Node* prevPtr = frontPtr;
	for (int loc = 1; loc != num_elements; loc++)
	{	
		prevPtr = prevPtr -> link;
	}
	newPtr -> link = prevPtr -> link;
	prevPtr -> link = newPtr;
	

     num_elements++;
 }



int Stack::top()
{
	Node* topPtr = frontPtr;
	for (int loc = 1; loc != num_elements; loc++)
	{	
		topPtr = topPtr -> link;
	}
	
	return topPtr -> data;
}

void Stack::pop()
{
	Node* delPtr;
	Node* prevPtr = frontPtr;
	for(int loc = 1; loc != num_elements-1; loc++)
	{
		prevPtr = prevPtr -> link;
	}
	
	delPtr = prevPtr -> link;
	prevPtr -> link = delPtr -> link;
	delete delPtr;
}

void Stack::clear()
{
	while(num_elements != 0)
		pop();
}







