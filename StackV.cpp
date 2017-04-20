#include "StackV.h"
#include <iostream>
using namespace std;


int Stack::size()
{
	return data.size();
}

void Stack::push(int i)
{
	data.push_back (i);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	return data.back();
}

void Stack::clear()
{
	data.clear();
}
