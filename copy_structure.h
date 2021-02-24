#include <iostream>
using namespace std;


class Line
{
public:
    int getLength(void);
    Line(int len);             // �򵥵Ĺ��캯��
    Line(const Line& obj);      // �������캯��
    ~Line();                     // ��������

private:
    int* ptr;
};


// ����ָ��
template <typename T>
class smart_ptr
{

public:
    explicit smart_ptr(T* ptr = nullptr)
        : _ptr(ptr) 
    {}

    ~smart_ptr()
    {
        delete _ptr;
    }

    smart_ptr(smart_ptr& other)
    {
        _ptr = other.relase();
    }

    smart_ptr& operator=(smart_ptr& other)
    {
        smart_ptr(other).swap(*this);
    }

    void swap(smart_ptr& ptr)
    {
        std::swap(_ptr, ptr);
    }

    T* relase()
    {
        // ��ʱptr
        T* ptr = _ptr;
        _ptr = nullptr;
        return ptr;
    }

    T* getPtr()
    {
        return _ptr;
    }

private:
    T* _ptr;

};