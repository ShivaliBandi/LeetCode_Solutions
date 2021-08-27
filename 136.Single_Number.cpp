/*
136. Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once
*/

#include <unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
     for(int i=0;i<nums.size();i++)
     {
         if (umap.find(nums[i]) == umap.end())
         {
              umap[nums[i]]=1;
         }
         else
         {
             
             int iret=umap[nums[i]];
             umap[nums[i]]+=1;
             
         }
     }
         // Traversing an unordered map
    for (auto x : umap)
    {
        if(x.second==1)
            return x.first;
    }
        return 0;
    }
};
