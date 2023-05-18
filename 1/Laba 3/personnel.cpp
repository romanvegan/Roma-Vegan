#include "personnel.h"
#include <iostream>

using namespace std;

const int MS = 20;
personnel** arr = new personnel * [MS];
int personnel::count = -1;

personnel::personnel() {
	cout << "constructor called" << endl;
	++count;
}
void personnel::print() {
	for (int i = 0; i <= personnel::count; i++)
		if (arr[i] != nullptr)arr[i]->Show();
}

void personnel::add() {
	::arr[count] = this;
}

personnel::~personnel() {
	cout << "destructor called" << endl;
}