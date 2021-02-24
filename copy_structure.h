#include <iostream>
using namespace std;


class Line
{
public:
    int getLength(void);
    Line(int len);             // 简单的构造函数
    Line(const Line& obj);      // 拷贝构造函数
    ~Line();                     // 析构函数

private:
    int* ptr;
};


// 智能指针
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
        // 临时ptr
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