// arrays -- static and dynamic 

#include <iostream>

int main()
{
  std::array<int, 3> nums = {1, 2, 3};                                       // declaring a array of type int
  std::cout << nums.at(1) << nums[0] << nums.front() << nums.back() << '\n'; // access elements
  std::cout << nums.size() << '\n';                                          // length of nums
  // push at the end of array

  // pop last time

  // iteration
  std::for_each(nums.cbegin(), nums.cend(), [](int x)
                { std::cout << x << ' '; });
}