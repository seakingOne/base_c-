#include <iostream>
#include "copy_structure.h"
using namespace std;


// ��������

// ��Ա�������壬�������캯��
Line::Line(int len)
{
    cout << "���ù��캯��" << endl;
    // Ϊָ������ڴ�
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line& obj)
{
    cout << "���ÿ������캯����Ϊָ�� ptr �����ڴ�" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // ����ֵ
}

Line::~Line(void)
{
    cout << "�ͷ��ڴ�" << endl;
    delete ptr;
}
int Line::getLength(void)
{
    return *ptr;
}

