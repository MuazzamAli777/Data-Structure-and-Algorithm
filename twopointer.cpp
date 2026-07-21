#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target)
{
    int L = 0;
    int R = numbers.size() - 1;

    while(L < R)
    {
        int sum = numbers[L] + numbers[R];

        if(sum == target)
            return {L, R};

        else if(sum < target)
            L++;

        else
            R--;
    }

    return {};
}

int main()
{
    vector<int> numbers = {1,2,11,7};

    int target = 9;

    vector<int> ans = twoSum(numbers, target);

    cout << ans[0] << " " << ans[1];
}