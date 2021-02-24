#include "PersonClass.h"
#include <iostream>

using namespace std;

Person::Person() {
	cout << "person 无参构造" << endl;
}


Person::Person(int id, string name) {

	_id = id;
	_name = name;

	cout << "person 有参构造" << id << ", " << name << endl;
}

Person::~Person() {
	cout << "person 析构函数" << endl;
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