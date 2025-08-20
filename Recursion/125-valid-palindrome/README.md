<h2><a href="https://leetcode.com/problems/valid-palindrome">Valid Palindrome</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />

<p>Given a string <code>s</code>, return <code>true</code><em> if it is a <strong>palindrome</strong>, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

## Problem Description
Given a string `s`, determine whether it is a palindrome or not.  
A palindrome is a string that reads the same forward and backward.  
- Ignore letter casing (treat uppercase and lowercase as the same).  
- Remove all characters that are not letters or digits before checking.  

### Examples
- Input: `"A man, a plan, a canal: Panama"`  
  Output: `true`  
  Explanation: After removing non-alphanumeric characters → `"amanaplanacanalpanama"`, which is a palindrome.  

- Input: `"race a car"`  
  Output: `false`  

- Input: `" "`  
  Output: `true` (empty string is considered a palindrome).  

---

## Approach
Har call me start aur end pointer ko compare karta hai.

Agar non-alphanumeric mile to skip karke agli call me bhejta hai.

Agar mismatch ho jaye to false return ho jata hai.

Agar sab match ho gaye to base case start >= end aayega aur true return karega.  

---

## Complexity
- **Time Complexity:** `O(n)` where `n` is the length of the string.  
- **Space Complexity:** `O(n)` for the cleaned string.  
