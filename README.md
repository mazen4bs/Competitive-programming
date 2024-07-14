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
 that are in the array after performing described operation an arbitrary (possibly, zero) number of times.<br>
 Solution:https://github.com/mazen4bs/Competitive-programming/blob/main/Merge-it.cpp
 # Heap Operations
 Petya has recently learned data structure named "Binary heap".

The heap he is now operating with allows the following operations:

put the given number into the heap;
get the value of the minimum element in the heap;
extract the minimum element from the heap;
Thus, at any moment of time the heap contains several integers (possibly none), some of them might be equal.

In order to better learn this data structure Petya took an empty heap and applied some operations above to it. Also, he carefully wrote down all the operations and their results to his event log, following the format:

insert x — put the element with value x in the heap;
getMin x — the value of the minimum element contained in the heap was equal to x;
removeMin — the minimum element was extracted from the heap (only one instance, if there were many).
All the operations were correct, i.e. there was at least one element in the heap each time getMin or removeMin operations were applied.

While Petya was away for a lunch, his little brother Vova came to the room, took away some of the pages from Petya's log and used them to make paper boats.

Now Vova is worried, if he made Petya's sequence of operations inconsistent. For example, if one apply operations one-by-one in the order they are written in the event log, results of getMin operations might differ from the results recorded by Petya, and some of getMin or removeMin operations may be incorrect, as the heap is empty at the moment they are applied.

Now Vova wants to add some new operation records to the event log in order to make the resulting sequence of operations correct. That is, the result of each getMin operation is equal to the result in the record, and the heap is non-empty when getMin ad removeMin are applied. Vova wants to complete this as fast as possible, as the Petya may get back at any moment. He asks you to add the least possible number of operation records to the current log. Note that arbitrary number of operations may be added at the beginning, between any two other operations, or at the end of the log.

Input
The first line of the input contains the only integer n (1 ≤ n ≤ 100 000) — the number of the records left in Petya's journal.

Each of the following n lines describe the records in the current log in the order they are applied. Format described in the statement is used. All numbers in the input are integers not exceeding 109 by their absolute value.

Output
The first line of the output should contain a single integer m — the minimum possible number of records in the modified sequence of operations.

Next m lines should contain the corrected sequence of records following the format of the input (described in the statement), one per line and in the order they are applied. All the numbers in the output should be integers not exceeding 109 by their absolute value.

Note that the input sequence of operations must be the subsequence of the output sequence.

It's guaranteed that there exists the correct answer consisting of no more than 1 000 000 operations.
solution:https://github.com/mazen4bs/Competitive-programming/blob/main/Heap-operations.cpp
 # Ada and Queue
 Ada the Ladybug has many things to do. She puts them into her queue. Anyway she is very indecisive, so sometime she uses the top, sometime the back and sometime she decides to reverses it.

Input
The first line consists of 1 ≤ Q ≤ 106, number of queries. Each of them contains one of following commands

back - Print number from back and then erase it

front - Print number from front and then erase it

reverse - Reverses all elements in queue

push_back N - Add element N to back

toFront N - Put element N to front

All numbers will be 0 ≤ N ≤ 100

Output
For each back/front query print appropriate number.

If you would get this type of query and the queue would be empty, print "No job for Ada?" instead.<br>
solution:https://github.com/mazen4bs/Competitive-programming/blob/main/Ada-and-queue.cpp
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
Each of the next lines contains a single string , a sequence of brackets.<br>
Solution: https://github.com/mazen4bs/Competitive-programming/blob/main/Balanced%20Brackets.cpp
