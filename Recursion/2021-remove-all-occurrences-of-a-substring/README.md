<h2><a href="https://leetcode.com/problems/remove-all-occurrences-of-a-substring">Remove All Occurrences of a Substring</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given two strings <code>s</code> and <code>part</code>, perform the following operation on <code>s</code> until <strong>all</strong> occurrences of the substring <code>part</code> are removed:</p>

<📌 Problem Statement

You are given two strings, s and part.
Your task is to repeatedly find the leftmost occurrence of the substring part in s and remove it, until part no longer exists in s.

Finally, return the modified string.

✨ Examples
Example 1

Input:

s = "daabcbaabcbc"
part = "abc"


Output:

"dab"


Explanation:

da[abc]baabcbc → remove abc → dabaabcbc

daba[abc]bc → remove abc → dababc

dab[abc] → remove abc → dab

Example 2

Input:

s = "axxxxyyyyb"
part = "xy"


Output:

"ab"


Explanation:

axxx[xy]yyyb → axxxyyyb

axx[xy]yyb → axxyyb

ax[xy]yb → axyb

a[xy]b → ab

✅ Constraints

1 <= s.length <= 1000

1 <= part.length <= 1000

s and part consist only of lowercase English letters.

🧠 Approach

Repeated Search

Continuously check if part exists inside s.

If found, remove it by slicing the string.

Termination

Stop when s.find(part) returns -1 (means no occurrence left).

Efficiency

Each removal takes O(n) time (since slicing makes a new string).
