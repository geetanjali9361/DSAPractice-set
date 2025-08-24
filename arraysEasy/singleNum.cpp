#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (int i : nums)
        {
            map[i]++; 
        }
        for (auto pair : map)
        {
            if (pair.second == 1)
            {
                return pair.first;
            }
        }
        return -1;
    }
};

int main()
{
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int> nums;
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    Solution sol;
    int result = sol.singleNumber(nums);
    cout << "The single number is: " << result << endl;
    return 0;
}