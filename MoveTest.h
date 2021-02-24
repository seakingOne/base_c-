#pragma once

class A {

public:
	A(int size);
	A(const A& a);
	A(A&& a);
	~A();

private:
	int* data = nullptr;
	int size = 0;

};

