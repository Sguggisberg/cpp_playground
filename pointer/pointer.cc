#include <iostream>

int main()
{
    int num = 5;
    std::cout << "Value: " << num << std::endl;
    std::cout << "Value: " << &num << std::endl;

    int *p = &num;
    std::cout << "Value: " << p << std::endl;
    std::cout << "Value of p: " << *p << std::endl;

    return 0;
}