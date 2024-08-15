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

# Tanya and Stairways
Little girl Tanya climbs the stairs inside a multi-storey building. Every time Tanya climbs a stairway, she starts counting steps from 1
 to the number of steps in this stairway. She speaks every number aloud. For example, if she climbs two stairways, the first of which contains 3
 steps, and the second contains 4
 steps, she will pronounce the numbers 1,2,3,1,2,3,4
.

You are given all the numbers pronounced by Tanya. How many stairways did she climb? Also, output the number of steps in each stairway.

The given sequence will be a valid sequence that Tanya could have pronounced when climbing one or more stairways.

Input
The first line contains n
 (1≤n≤1000
) — the total number of numbers pronounced by Tanya.

The second line contains integers a1,a2,…,an
 (1≤ai≤1000
) — all the numbers Tanya pronounced while climbing the stairs, in order from the first to the last pronounced number. Passing a stairway with x
 steps, she will pronounce the numbers 1,2,…,x
 in that order.

The given sequence will be a valid sequence that Tanya could have pronounced when climbing one or more stairways.

Output
In the first line, output t
 — the number of stairways that Tanya climbed. In the second line, output t
 numbers — the number of steps in each stairway she climbed. Write the numbers in the correct order of passage of the stairways.
# Chat order 
Polycarp is a big lover of killing time in social networks. A page with a chatlist in his favourite network is made so that when a message is sent to some friend, his friend's chat rises to the very top of the page. The relative order of the other chats doesn't change. If there was no chat with this friend before, then a new chat is simply inserted to the top of the list.

Assuming that the chat list is initially empty, given the sequence of Polycaprus' messages make a list of chats after all of his messages are processed. Assume that no friend wrote any message to Polycarpus.

Input
The first line contains integer n (1 ≤ n ≤ 200 000) — the number of Polycarpus' messages. Next n lines enlist the message recipients in the order in which the messages were sent. The name of each participant is a non-empty sequence of lowercase English letters of length at most 10.

Output
Print all the recipients to who Polycarp talked to in the order of chats with them, from top to bottom.
# Boy or Girl
Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

Output
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).


# Tricky Sum 
In this problem you are to calculate the sum of all integers from 1 to n, but you should take all powers of two with minus in the sum.

For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 are 20, 21 and 22 respectively.

Calculate the answer for t values of n.

Input
The first line of the input contains a single integer t (1 ≤ t ≤ 100) — the number of values of n to be processed.

Each of next t lines contains a single integer n (1 ≤ n ≤ 109).

Output
Print the requested sum for each of t integers n given in the input.
# T-prime
We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.

You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

Input
The first line contains a single positive integer, n (1 ≤ n ≤ 105), showing how many numbers are in the array. The next line contains n space-separated integers xi (1 ≤ xi ≤ 1012).

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.

Output
Print n lines: the i-th line should contain "YES" (without the quotes), if number xi is Т-prime, and "NO" (without the quotes), if it isn't.
# String-task
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.<br>
solution: https://github.com/mazen4bs/Competitive-programming/blob/main/string-task.cpp

# chat-room
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".
solution: https://github.com/mazen4bs/Competitive-programming/blob/main/chatroom.cpp
