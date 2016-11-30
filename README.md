# distinct-prime-factors 
Find the first n consecutive integers to have n distinct prime factors each.

### [Background](https://projecteuler.net/problem=47)
The first two consecutive numbers to have two distinct prime factors are:

14 = 2 × 7  
15 = 3 × 5

The first three consecutive numbers to have three distinct prime factors are:

644 = 2<sup>2</sup> × 7 × 23  
645 = 3 × 5 × 43  
646 = 2 × 17 × 19

### Problem Statement
Find the first four consecutive integers to have four distinct prime factors each.

### (Theoretical?) Limitations
This implementation uses the `int` primitive to find consecutive numbers.  As such, it probably cannot find the first **five** consecutive numbers to have **five** distinct prime factors.  
However, after using the `long long` primitive rather than `int`, this program does not appear to arrive at an answer.  
As an aside, it's unclear whether there even *are* five consecutive numbers with five distinct primes.

### Motivation
This project was completed for [Project Euler - Problem 47](https://projecteuler.net/problem=47).

I recommend that this code should only be viewed _after_ you've completed your own implementation.  
If you're super stuck, take a break, take a walk, and it will come to you; good luck.
