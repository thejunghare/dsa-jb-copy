#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> left, vector<int> right)
{
    vector<int> result;
    int leftCurrent = 0;
    int rightCurrent = 0;

    while (leftCurrent < left.size() && rightCurrent < right.size())
    {
        if (left[leftCurrent] < right[rightCurrent])
        {
            result.push_back(left[leftCurrent]);
            leftCurrent++;
        }
        else
        {
            result.push_back(right[rightCurrent]);
            rightCurrent++;
        }
    }

    while (leftCurrent < left.size())
    {
        result.push_back(left[leftCurrent]);
        leftCurrent++;
    }

    while (rightCurrent < right.size())
    {
        result.push_back(right[rightCurrent]);
        rightCurrent++;
    }

    return result;
}

vector<int> mergeSort(vector<int> nums)
{
    if (nums.size() <= 1)
    {
        return nums;
    }

    int middleIndex = nums.size() / 2;
    vector<int> leftHalf(nums.begin(), nums.begin() + middleIndex);
    vector<int> rightHalf(nums.begin() + middleIndex, nums.end());

    vector<int> nextLeft = mergeSort(leftHalf);
    vector<int> nextRight = mergeSort(rightHalf);
    return merge(nextLeft, nextRight);
}

int main()
{
    vector<int> nums = {70, 30, 50, 10};
    vector<int> result = mergeSort(nums);

    for (int x : result)
    {
        cout << x << " ";
    }
}