#include <iostream>
#include <vector>
#include <cstdint>

void print_vector(const std::vector<std::int32_t> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ",";
    }
    std::cout << std::endl;
}

int main()
{
    auto vector = std::vector<std::int32_t>(5, 0);
    print_vector(vector);
    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;
    vector[3] = 4;
    print_vector(vector);
    vector.push_back(22);
    print_vector(vector);
    vector.pop_back();
    print_vector(vector);

    return 0;
}