#include "container.h"
#include "point.h"
#include "struct.h"
//#include "PersonClass.h"
#include "copy_structure.h"
#include "MoveTest.h"
#include <iostream>

using namespace std;


A CreateA(int size) {
    A a(size);
    return a;
}

int main()
{
    // containers
    //container_test();

    // points
    //point_test();
    //point_test_more();
    //point_test_char();

    /*char a = 'a';
    char b = 'b';
    swap(a, b);

    char* c = &a;

    cout << "a = " << a << ", b = " << b << endl;*/

    //testStruct();
    //compareMemory();

    //testMemeory();

   /* Person person(1, "admin");
    cout << person << endl;

    Person person2(2, "admin2");
    Person merge = person + person2;
    cout << merge << endl;*/

    //vector_test();

    //int* i = new int(1);

    //smart_ptr<int> s(i);
    //smart_ptr<int> s1 = s;
    //cout << s.getPtr() << endl;
    //cout << s1.getPtr() << endl;

    A b = CreateA(10);
    cout << endl;
}


// smart point



