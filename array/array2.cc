#include <iostream>

int main()
{
    const char name[] = "TestText"; // = "TestText/0"
    const std::int32_t values[]{1, 2, 3};

    std::cout << name << std::endl;
    std::cout << values << std::endl;
    return 0;
}