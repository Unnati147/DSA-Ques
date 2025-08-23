<h2><a href="https://leetcode.com/problems/majority-element">Majority Element</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given an array <code>nums</code> of size <code>n</code>, return <em>the majority element</em>.</p>

Given an integer array nums of length n, find the element that appears more than n/2 times.
You can assume that such an element always exists.

Example

Input:

nums = [2,2,1,1,1,2,2]


Output:

2

Solution (Boyer–Moore Voting Algorithm)

We use a counter to track a potential majority candidate:

If the counter is zero, pick the current element as candidate.

Increase counter if the current element matches candidate, otherwise decrease it.

At the end, the candidate will be the majority element.

Code (C++)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for (int num : nums) {
            if (count == 0) candidate = num;
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};

Complexity

Time: O(n)

Space: O(1)
