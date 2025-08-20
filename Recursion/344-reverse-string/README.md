<h2><a href="https://leetcode.com/problems/reverse-string">Reverse String</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-bendgreen' alt='Difficulty: Easy' />
<p>You must do this by modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> with <code>O(1)</code> extra memory.</p>

Problem

(Solve using recursion)
Given an array of characters, reverse it in-place.
Instead of the usual two-pointer method, this solution uses recursion.

Example

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Approach

Base case: if start index ≥ end index → stop recursion.

Recursive step: swap the characters at start and end, then call the function again for start+1 and end-1.

Complexity

Time Complexity: O(n)

Space Complexity: O(n) (due to recursion stack)
