#include <iostream>

void a(int a)
{
    std::cout << "*******************************" << std::endl;
    std::cout << "a address " << &a << std::endl;
    std::cout << "value address " << a << std::endl;
    std::cout << "*******************************" << std::endl;
}

void b(int *b) // Don't use this. Null Pointer?
{
    std::cout << "*******************************" << std::endl;
    std::cout << "b value " << *b << std::endl;
    std::cout << "b address " << &b << std::endl;
    std::cout << "value address of pointer " << b << std::endl;
    std::cout << "*******************************" << std::endl;
}
void c(int &c)
{
    std::cout << "*******************************" << std::endl;
    std::cout << "c address " << &c << std::endl;
    std::cout << "value address " << c << std::endl;
    std::cout << "*******************************" << std::endl;
}
void d(const int &d)
{
    std::cout << "*******************************" << std::endl;
    std::cout << "d address " << &d << std::endl;
    std::cout << "value address " << d << std::endl;
    std::cout << "*******************************" << std::endl;
}

int main()
{
    int num = 5;
    a(num);
    b(&num);
    c(num);
    d(num);

    return 0;
}