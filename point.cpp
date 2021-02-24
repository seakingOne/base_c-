#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

typedef unsigned int my_size;

void point_test() {
	
	char str1[12] = "helloworld";
	char str2[] = "helloworld";
	const char* p = "helloworld";
	char* p1 = str1;

	for (int i = 0; i < 11; i++) {
		str1[i] = str1[i] + 1;
	}

	p = str1;
	*p1 = '1';

	my_size size = strlen(str2);
	
	cout << "size=" << size << endl;

	strcat_s(str2, str1);
	cout << "str2=" << str2 << endl;
}

void point_test_more() {

	string count1 = "28";
	string* pCount1 = &count1;

	cout << "count1: " << count1 << endl;
	cout << "&pCount1: " << &pCount1 << endl;
	cout << "pCount1: " << pCount1 << endl;
	cout << "*pCount1: " << *pCount1 << endl;
	cout << "&count1: " << &count1 << endl;

	cout << endl;
}

void point_test_char() {

	char one = 'a';
	cout << "&one = " << &one << endl;
	char* p1 = &one;

	char two = *p1;
	*(p1 + 1) = 'c';
	two = *(p1 + 1);
	//two = *p1 + 1;

	int a = 1;
	int b = 2;
	a = b;


	cout << a << endl;
}

// 此处为引用
void swap(char& a, char& b) {
	char temp = b;
	b = a;
	a = temp;
}


void testMemeory() {

	int i = 0;
	int a = i++;
	int b = ++i;

	cout << a << endl;
	cout << b << endl;

}