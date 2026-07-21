#include <iostream>
#include <vector>
using namespace std;

vector<int> pivotsum(vector<int>& numbers)
{
    int leftsum=0;
    int n=numbers.size();
    int totalsum=0;
    int rightsum;
int i=0;
    for ( i=0;i<n;i++){
totalsum=totalsum+numbers[i];

    }

    for ( i =0;i<n;i++){

        rightsum=totalsum-leftsum-numbers[i];
        if(leftsum==rightsum) return {i};
        leftsum=leftsum+numbers[i];


    }
    return {};

}

int main()
{
    vector<int> numbers = {1,2,11,7,0,5,32,0,2,4,0};
 vector <int> ans =pivotsum(numbers);
  if(ans.empty())
    {
        cout << "Pivot nahi mila.";
    }
    else
    {
        cout << "Mil gaya pivot: " << ans[0];
    }
}