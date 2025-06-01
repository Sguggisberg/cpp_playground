#include <iostream>

enum class Role
{
    ADMIN,
    USER
};

struct Test
{
    std::string name;
    std::uint32_t id;
    Role role;
};

void print_info(Test &test)
{
    switch (test.role)
    {
    case Role::ADMIN:
        std::cout << "Hallo Admin\n";
        break;
    case Role::USER:
        std::cout << "Hallo User\n";
        break;
    default:
        break;
    }
}

int main()
{
    Test test = {"Stefan", 123, Role::USER};
    print_info(test);
    return 0;
}
