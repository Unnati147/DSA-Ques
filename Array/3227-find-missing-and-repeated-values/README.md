<h2><a href="https://leetcode.com/problems/find-missing-and-repeated-values">Find Missing and Repeated Values</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
You are given an n x n grid containing integers from 1 to n^2.

Each number should appear exactly once.

However, one number a appears twice (repeated).

Another number b is missing from the grid.

Return an array [a, b] where:

a = the repeated number

b = the missing number

Example

Input:

grid = [[1,3],
        [2,2]]


Output:

[2, 4]


Explanation:

Number 2 occurs twice

Number 4 is missing

Input:

grid = [[9,1,7],
        [8,9,2],
        [3,4,6]]


Output:

[9, 5]


Explanation:

Number 9 occurs twice

Number 5 is missing

Constraints

2 <= n <= 50

Grid contains values in [1, n^2]

Exactly one number is repeated, and exactly one number is missing.

Approach

Flatten the grid into a single list.

Use a frequency map (or array) to count occurrences of each number.

Traverse from 1 to n^2:

If count == 2 → repeated number a.

If count == 0 → missing number b.

Return [a, b].

This runs in O(n^2) time with O(n^2) extra space, which is efficient given the constraints.
