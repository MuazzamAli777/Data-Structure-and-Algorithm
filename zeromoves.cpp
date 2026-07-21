#include <iostream>
#include <vector>
using namespace std;

vector<int> movezeros(vector<int>& numbers)
{
    int j = 0;

    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] == 0)
        {
            // Manual Swap
            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;

            j++;
        }
    }

    return numbers;
}

int main()
{
    vector<int> numbers = {1,2,11,7,0,5,32,0,2,4,0};

    vector<int> ans = movezeros(numbers);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}