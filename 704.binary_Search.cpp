/*
704 Binary Search
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 

Constraints:

1 <= nums.length <= 104
-104 < nums[i], target < 104
All the integers in nums are unique.
nums is sorted in ascending order.
*/

class Solution {
public:
    int binarySearch(vector<int>& arr, int key, int left, int right)
    {
        if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (key == arr[mid])
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, key, left, mid - 1);
        if (arr[mid] < key)
            return binarySearch(arr, key, mid + 1, right);
    }
    return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,target,0,nums.size()-1);
    }
};

