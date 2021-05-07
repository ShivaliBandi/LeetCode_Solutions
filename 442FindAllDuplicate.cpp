/*
442. Find All Duplicates in an Array
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]


*/


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ret;
        sort(nums.begin(),nums.end());
        if(nums.empty()==true)
            return nums;
        for(int icnt=0;icnt<nums.size()-1;icnt++)
        {
            if(nums[icnt]==nums[icnt+1])
            {
                ret.push_back(nums[icnt]);
                icnt++;
            }       
        }
        return ret;
    }
};
