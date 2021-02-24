#pragma once
#include "string"
#include <iostream>

using namespace std;

class Person {

public:
	Person();
	Person(int id, string name);
	~Person();

	int getId() const;
	void setId(int id);
	string getName() const;

	// 重载 + 运算符，用于把两个 Box 对象相加
	Person operator+(const Person& p)
	{
		Person f;
		f._id = _id + p.getId();
		f._name = "merge name";
		return f;
	}
	
	// io运算符重载
	friend ostream &operator<< (ostream& output, const Person &p) {
		output << "id : " << p._id << ", name : " << p._name;
		return output;
	}

private:
	int _id;
	string _name;

};

