#include "MoveTest.h"
#include <iostream>

using namespace std;

A::A(int size) {
	cout << "constructor" << endl;
	this->size = size;
	if (size)data = new int[size];
	for (int i = 0; i < size; ++i) {
		data[i] = i;
	}
};

// Éî¿½±´
A::A(const A& a) {
	cout << "copy constructor" << endl;
	this->size = a.size;
	data = new int[size];
	memcpy(data, a.data, size * sizeof(int));
};

//Ç³¿½±´
A::A(A&& a) {
	cout << "move constructor" << endl;
	data = a.data;
	this->size = a.size;
	a.data = nullptr;
	a.size = 0;
};

A::~A() {
	cout << "delete" << endl;
	delete data;
};
