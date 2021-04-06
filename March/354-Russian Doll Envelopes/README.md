# 354-Russian Doll Envelopes-Hard
###### tags: `leetcode`
## Problem
You are given a 2D array of integers `envelopes` where `envelopes[i] = [wi, hi]` represents the width and the height of an envelope.

One envelope can fit into another if and only if both the width and height of one envelope is greater than the width and height of the other envelope.

Return the maximum number of envelopes can you Russian doll (i.e., put one inside the other).

**Note:** You cannot rotate an envelope.

**Example 1:**
```
Input: envelopes = [[5,4],[6,4],[6,7],[2,3]]
Output: 3
Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).
```

**Example 2:**
```
Input: envelopes = [[1,1],[1,1],[1,1]]
Output: 1
```

**Note:**
- `1 <= envelopes.length <= 5000`
- `envelopes[i].length == 2`
- `1 <= w_i, h_i <= 10^4`



## Answer
- sort vector. If vector[n][0] is equal and the vector[n][1] bigger one is priorly. 這甚麼拉基英文 
- like problem 300.
- https://www.cnblogs.com/grandyang/p/5568818.html
