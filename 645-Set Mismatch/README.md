# 645-Set Mismatch-Easy
###### tags: `leetcode`
## Problem
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

**Example 1:**
```
Input: nums = [1,2,2,4]
Output: [2,3]
```
**Example 2:**
```
Input: nums = [1,1]
Output: [1,2]
```

Constraints:

- 2 <= nums.length <= $10^4$
- 1 <= nums[i] <= $10^4$

## Answer
### Solution 1
- use loop to find duplicated num, and missing num will be positive

**Example :**
```cpp !
nums = [1, 2, 5, 4, 1, 6]
first loop //if(nums[abs(element) - 1] > 0) { find duplicated num } else { let element to negative }
nums = [-1, -2, 5, -4, -1, -6]
second loop //if(nums[index] > 0) { find missing num }
```
### Solution 2
- use set to find duplicated num
- use nums's index to find which num not in set