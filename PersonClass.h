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

	// ���� + ����������ڰ����� Box �������
	Person operator+(const Person& p)
	{
		Person f;
		f._id = _id + p.getId();
		f._name = "merge name";
		return f;
	}
	
	// io���������
	friend ostream &operator<< (ostream& output, const Person &p) {
		output << "id : " << p._id << ", name : " << p._name;
		return output;
	}

private:
	int _id;
	string _name;

};

