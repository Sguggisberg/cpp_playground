#include <iostream>

void test(int v)
{
    std::cout << "v address " << &v << std::endl;
}

int main()
{
    int num = 5;
    std::cout << "num address: " << &num << std::endl;
    test(num);
    return 0;
}