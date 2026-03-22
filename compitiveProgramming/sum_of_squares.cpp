#include <iostream>

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    return sum;
}

int main()
{
    int n = 2;
    std::cout << sum(n);
}