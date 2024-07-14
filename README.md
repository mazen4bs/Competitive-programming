# Competitive-programming
# Merge it
You are given an array a
 consisting of n
 integers a1,a2,…,an
.

In one operation you can choose two elements of the array and replace them with the element equal to their sum (it does not matter where you insert the new element). For example, from the array [2,1,4]
 you can obtain the following arrays: [3,4]
, [1,6]
 and [2,5]
.

Your task is to find the maximum possible number of elements divisible by 3
 that are in the array after performing this operation an arbitrary (possibly, zero) number of times.

You have to answer t
 independent queries.

Input
The first line contains one integer t
 (1≤t≤1000
) — the number of queries.

The first line of each query contains one integer n
 (1≤n≤100
).

The second line of each query contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

Output
For each query print one integer in a single line — the maximum possible number of elements divisible by 3
 that are in the array after performing described operation an arbitrary (possibly, zero) number of times.
 
 # Balanced Brackets 
A bracket is considered to be any one of the following characters: ( , ) , { , } , [ , or ] .
Two brackets are considered to be a matched pair if the an opening bracket (i.e., ( , [ , or { )
occurs to the left of a closing bracket (i.e., ) , ] , or } ) of the exact same type. There are
three types of matched pairs of brackets: [] , {} , and () .
A matching pair of brackets is not balanced if the set of brackets it encloses are not matched.
For example, {[(])} is not balanced because the contents in between { and } are not
balanced. The pair of square brackets encloses a single, unbalanced opening bracket, ( , and
the pair of parentheses encloses a single, unbalanced closing square bracket, ] .
By this logic, we say a sequence of brackets is balanced if the following conditions are met:
It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is
also a matched pair of brackets.
Given strings of brackets, determine whether each sequence of brackets is balanced. If a
string is balanced, return YES . Otherwise, return NO .
Function Description
Complete the function isBalanced in the editor below.
isBalanced has the following parameter(s):
string s: a string of brackets
Returns
string: either YES or NO
Input Format
The first line contains a single integer , the number of strings.
Each of the next lines contains a single string , a sequence of brackets.
Solution: https://github.com/mazen4bs/Competitive-programming/blob/main/Balanced%20Brackets.cpp
