/* Question:

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
link-https://leetcode.com/problems/two-sum/
*/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> m1;
        for(int i=0;i<nums.size();i++)
        {
            if(m1.find(target-nums[i])!=m1.end())
            {
                return {m1[target-nums[i]], i};
            }
            m1[nums[i]]=i;
        }
        return {};
    }
};
/*
Editorial:
The basic idea is to maintain a hash table for each element num in nums, using num as key and its index (0-based) as value. 
For each num, search for target - num in the hash table. If it is found and is not the same element as num, then we are done.
*/
