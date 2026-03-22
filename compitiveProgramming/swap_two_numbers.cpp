#include <iostream>

std::pair<int, int> swap_two_numbers(int a, int b)
{
    int temp;
    b = a;
    a = temp;
    temp = b;
    return {a, b};
}

int main()
{
    auto [a, b] = swap_two_numbers(2, 3);
    std::cout << "First number: " << a << ", Second number: " << b << std::endl;
}