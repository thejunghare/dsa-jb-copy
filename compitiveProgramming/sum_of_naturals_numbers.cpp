#include <iostream>

int sum(int n)
{
    int start = 1, sum = 0;

    for (int i = start; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n = 5;
    std::cout << sum(n);
}