<h2><a href="https://leetcode.com/problems/add-strings">Add Strings</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given two non-negative integers, <code>num1</code> and <code>num2</code> represented as string, return <em>the sum of</em> <code>num1</code> <em>and</em> <code>num2</code> <em>as a string</em>.</p>

You must not use big-integer libraries or convert the whole strings to integers.

Problem

Inputs: num1, num2 — strings of digits ("0"–"9"), lengths up to 10^4.

Output: a string representing num1 + num2.

No leading zeros (except when the number is "0").

Examples
Input:  num1 = "11",  num2 = "123"
Output: "134"

Input:  num1 = "456", num2 = "77"
Output: "533"

Input:  num1 = "0",   num2 = "0"
Output: "0"

Intuition

Do the same thing you do when adding by hand:

Start from the rightmost digits (least significant).

Add digits plus a carry.

Keep the last digit, carry over the rest.

Continue until both strings are processed; append any leftover carry.

Approach (Iterative, recommended)

Use two pointers p1 and p2 at the ends of num1 and num2.

While p1 >= 0 or p2 >= 0 or carry > 0:

Take current digits (or 0 if pointer is past start).

csum = n1 +  n2 + carry

Push back sum % 10 to a result string (as a char).

carry = csum / 10

Reverse the result string.

Complexity

Time: O(n + m) (each digit processed once)

Space: O(max(n, m)) (result)
