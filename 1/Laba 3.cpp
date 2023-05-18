#include <iostream>
#include <string>
#include "personnel.h"
#include "administration.h"
#include "engineer.h"
#include "worker.h"

using namespace std;

int main() {
	personnel* ptr;

	administration A;
	ptr = &A;
	ptr->add();

	engineer B;
	ptr = &B;
	ptr->add();

	worker C;
	ptr = &C;
	ptr->add();

	engineer D;
	ptr = &D;
	ptr->add();

	personnel::print();
}

