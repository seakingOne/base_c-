#include <iostream>
using namespace std;

typedef int myint;

union  Other
{
	double sc;  //8
	char level;  // 1 
};

struct Student
{
	char name[6];   // 1
	int age;       // 4
	Other score;   // 12
};


void testStruct() {

	Student stu;
	strcpy_s(stu.name, "yn");
	stu.age = 20;
	stu.score.sc = 98.5;
	stu.score.level = 'A';

	cout << sizeof(Student) << endl;
	cout << sizeof(Other) << endl;

}

// 分析结构体内存占用 
struct Test1
{
	char a;
	short b;
	int c;
};

struct Test2
{
	char a;
	int c;
	short b;
};

void compareMemory() {
	
	// case1
	Test1 t1;
	t1.a = 'a';  // 1
	t1.b = 2;    // 2
	t1.c = 200;  // 4

	cout << sizeof(Test1) << endl; // 4 + 4 = 8

	// case2
	Test2 t2;
	t2.a = 'a';
	t2.b = 8;
	t2.c = 288;

	cout << sizeof(Test2) << endl; // 4 * 3 = 12

	cout << endl;

}
