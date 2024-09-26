#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int value : nums)
        {
            ans = ans ^ value;
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    Solution solution;
    cout << solution.singleNumber(nums) << endl;

    return 0;
}