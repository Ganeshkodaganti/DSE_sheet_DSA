/* 
53. Maximum Subarray
Medium

26443

1187

Add to List

Share
Given an integer array nums, find the subarray which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

*/
#include<bits/stdc++.h>
using namespace std;


int kadanesAlgo(vector<int> &v1)
{
int maxSoFar=INT_MIN;
int maxEndingHere=0;

for(int i=0;i<v1.size();++i)
{
    maxEndingHere+=v1[i];

    if(maxSoFar<maxEndingHere) maxSoFar=maxEndingHere;

    if(maxEndingHere<0) maxEndingHere=0;

}
return maxSoFar;

}






int main()
{
   
    vector<int> v1={-2,1,-3,4,-1,2,1,-5,4};
   
    cout<<kadanesAlgo(v1);

    return 0;
}