<h2><a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock">Best Time to Buy and Sell Stock</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>You are given an array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction.
If no profit is possible, return 0.

Problem Statement

You are given an array prices where prices[i] is the price of a given stock on the i-th day.

You must buy before you sell.

Return the maximum profit achievable, else return 0.

Example 1
Input: prices = [7,1,5,3,6,4]
Output: 5

Explanation: 
Buy on day 2 (price = 1) and sell on day 5 (price = 6). 
Profit = 6 - 1 = 5.

Example 2
Input: prices = [7,6,4,3,1]
Output: 0

Explanation:
No transactions are done, so the max profit = 0.

Constraints

1 <= prices.length <= 10^5

0 <= prices[i] <= 10^4

💡 Approach

Track the minimum price seen so far.

For each day, calculate the potential profit = currentPrice - minPrice.

Update maxProfit if this profit is higher.

Time Complexity: O(n)
Space Complexity: O(1)
