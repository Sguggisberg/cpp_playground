#include <iostream>

int main()
{
    int *p = new int; // get mmory on heap
    *p = 4;

    //    int *p = new int{4}; // get mmory on heap

    std::cout << "address of p: " << &p << std::endl;
    std::cout << "point to: " << p << std::endl;
    std::cout << "value: " << *p << std::endl;

    *p = 8;
    std::cout << "address of p: " << &p << std::endl;
    std::cout << "point to: " << p << std::endl;
    std::cout << "value: " << *p << std::endl;

    delete p;

    return 0;
}