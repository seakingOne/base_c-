#include "PersonClass.h"
#include <iostream>

using namespace std;

Person::Person() {
	cout << "person �޲ι���" << endl;
}


Person::Person(int id, string name) {

	_id = id;
	_name = name;

	cout << "person �вι���" << id << ", " << name << endl;
}

Person::~Person() {
	cout << "person ��������" << endl;
}

int Person::getId() const {
	return _id;
}

string Person::getName() const {
	return _name;
}

void Person::setId(int id) {
	_id = id;
}