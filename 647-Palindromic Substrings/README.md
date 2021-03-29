# 647-Palindromic Substrings-Medium
###### tags: `leetcode`
## Problem
Given a string, your task is to count how many palindromic substrings in this string.

The substrings with different start indexes or end indexes are counted as different substrings even they consist of same characters.

**Example 1:**
```
Input: "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
```

**Example 2:**
```
Input: "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
```

**Note:**
- The input string length won't exceed 1000.


## Answer
- Bad solution: compare the reverse whether equal to raw one.
- Best solution: use DP or for-loop.
- https://leetcode.com/problems/palindromic-substrings/solution/
