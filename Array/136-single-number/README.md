<h2><a href="https://leetcode.com/problems/single-number">Single Number</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given a <strong>non-empty</strong>&nbsp;array of integers <code>nums</code>, every element appears <em>twice</em> except for one. Find that single one.</p>

<Problem

You are given an array nums where:

Every element appears twice, except for one element, which appears only once.

Find and return that single element.

You must implement a solution that runs in O(n) time and uses O(1) extra space.

Example

Input:

nums = [2,2,1]


Output:

1


Input:

nums = [4,1,2,1,2]


Output:

4


Input:

nums = [1]


Output:

1

Constraints

1 <= nums.length <= 3 * 10^4

-3 * 10^4 <= nums[i] <= 3 * 10^4

Every element appears twice except for one element.

Approach

The key observation:

XOR (^) of two equal numbers is 0.

XOR with 0 gives the number itself.

So if we XOR all numbers together:

Pairs cancel out (a ^ a = 0).

The single number remains.
