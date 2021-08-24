

/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


*/



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         map<int, int> dobj;
         map<int, int>::iterator itr;
      
        for(int i=0;i<nums.size();i++)
        {
            if (dobj.find(nums[i]) == dobj.end())
                dobj.insert(pair<int, int>(nums[i],1));
            else
            {
                itr=dobj.find(nums[i]);
                itr->second+=1;
            }
           
            
        }
        for (itr = dobj.begin(); itr != dobj.end(); ++itr)
        {
            if(itr->second>1)
                return true;
        }
        return false;
    }
};
