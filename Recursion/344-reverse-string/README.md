<h2><a href="https://leetcode.com/problems/reverse-string">Reverse String</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Write a function that reverses a string. The input string is given as an array of characters <code>s</code>.</p>

<p>You must do this by modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> with <code>O(1)</code> extra memory.</p>

Problem

Given an array of characters, reverse it in-place.
Instead of the usual two-pointer method, this solution uses recursion.

Example

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Approach

Base case: if left index ≥ right index → stop recursion.

Recursive step: swap the characters at left and right, then call the function again for left+1 and right-1.

Complexity

Time Complexity: O(n)

Space Complexity: O(n) (due to recursion stack)
