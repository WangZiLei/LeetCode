# 461. Hamming Distance
[Visit this problem][1]

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

>Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.


Solution1:Using xor,then counts how many times the bit '1' appear,so easy but be careful

[1]: https://leetcode.com/problems/hamming-distance/description/
