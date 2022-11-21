/*
75. Sort Colors
Medium

13039

477

Add to List

Share
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
 

Follow up: Could you come up with a one-pass algorithm using only constant extra space?
*/
#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
        {
            int cnt_0 = 0;
            int cnt_1 = 0;
            int cnt_2 = 0;

            for (int i = 0; i < nums.size(); ++i)
            {
                if (nums[i] == 0) cnt_0++;
                if (nums[i] == 1) cnt_1++;
                if (nums[i] == 2) cnt_2++;
            }

            nums = {};

            while (cnt_0--)
            {
                nums.push_back(0);
            }
            while (cnt_1--)
            {
                nums.push_back(1);
            }
            while (cnt_2--)
            {
                nums.push_back(2);
            }
           
        }
int main()
{
    vector<int> nums={2,0,2,1,1,0};

    sortColors(nums);

    for(int i=0;i<nums.size();++i)
    {
        cout<<nums[i]<<" ";
    }
}