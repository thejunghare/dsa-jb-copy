#include <iostream>
#include <array>

std::array<int, 5> age = {8, 2, 5, 12, 3};
int maxAge, minAge = age[0];
int ageRange = 0;

int checkAgeRange()
{
  for (int i = 0; i < age.size(); i++)
  {

    if (maxAge < age[i])
    {
      maxAge = age[i];
    }
    if (minAge > age[i])
    {
      minAge = age[i];
    }
  }

  return ageRange = maxAge - minAge;
}

int main()
{
  std::cout << checkAgeRange();
}