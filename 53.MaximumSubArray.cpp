/*
53. Maximum Subarray

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 

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

1 <= nums.length <= 3 * 104
-105 <= nums[i] <= 105
 
this question is solved using kadane alogrithm with time complexity O(n)
it can be solved using divide and conqur with time coomoplexity with O(nlogn)
and using dp time complexity O(logn)

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0],max_sum=nums[0];
        if(nums.size()==1)
        {
            if(nums[0]<=0)
                return nums[0];
        }
        for(int i=1;i<nums.size();i++)
        {
            if(max_sum<0)
                max_sum=0;
            max_sum+=nums[i];
            
            if(max<max_sum)
                max=max_sum;
            
            // cout<<max_sum<<endl;
            
        }
        return max;
    }
};
