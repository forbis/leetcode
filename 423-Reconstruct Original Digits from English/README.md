# 423-Reconstruct Original Digits from English-Medium
###### tags: `leetcode`
## Problem
Given a **non-empty** string containing an out-of-order English representation of digits `0-9`, output the digits in ascending order.


**Example 1:**
```
Input: "owoztneoer"

Output: "012"
```

**Example 2:**
```
Input: "fviefuro"

Output: "45"
```

**Note:**
- Input contains only lowercase English letters.
- Input is guaranteed to be valid and can be transformed to its original digits. That means invalid inputs such as "abc" or "zerone" are not permitted.
- Input length is less than 50,000.

## Answer
- find out the universe charactor in number '0'、'2'、'4'、'6'、'8' is 'z'、'w'、'u'、'x'、'g' and then calculate occur the same charactor in other word.
- For example, '1' is the count of 'o' and decrease '0'、'2'、'4'
