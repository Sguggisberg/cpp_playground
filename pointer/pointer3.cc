#include <iostream>

int main()
{

   int *p = new int{4}; // get mmory on heap alloc

    std::cout << "address of p: " << &p << std::endl;
    std::cout << "point to: " << p << std::endl;
    std::cout << "value: " << *p << std::endl;

    *p = 8;
    std::cout << "address of p: " << &p << std::endl;
    std::cout << "point to: " << p << std::endl;
    std::cout << "value: " << *p << std::endl;

   // delete p;
    std::cout << "address of p: " << &p << std::endl;
    std::cout << "point to: " << p << std::endl;
    std::cout << "value: " << *p << std::endl;
    return 0;
}