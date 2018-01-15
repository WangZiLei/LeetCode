# 476. Number Complement
[Visit this problem][1]

Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Note:
1. The given integer is guaranteed to fit within the range of a 32-bit signed integer.
2. You could assume no leading zero bit in the integer’s binary representation.

Example 1:

>Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Example 2:

>Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.

------


- Solution1:Using bitset to operate number in bit,then convert bits to unsigned long by using to_ulong().
By demostrating the flipping process in bits,can you understand solution1.
- Solution2:Writing down some groups of input and output:
>1->0
>2->1
>3->0
>4->3
>5->2
>6->1
>7->0

We can conclude the rule that input x then output $n-x-1$ ,especially $n= 2^i,i>=0$ ,and $\frac{n}{2} \le x < n$


[1]: https://leetcode.com/problems/number-complement/description/
