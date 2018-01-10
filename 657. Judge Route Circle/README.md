# 657. Judge Route Circle
[Visit this problem][1]

Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to **the original place**.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
>Input: "UD"
Output: true

Example 2:
>Input: "LL"
Output: false



- Solution1:
using steps[] to recode move how many steps in up-down and left-right direction totally.
Lasyly in the code,maybe we can use bit-operate to reduce time(The code part commented in the end).


[1]: https://leetcode.com/problems/judge-route-circle/description/
