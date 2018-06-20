# HackerRank - Between Two Sets

## Table of Contents
<!-- TOC -->

- [HackerRank - Between Two Sets](#hackerrank---between-two-sets)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Input Format](#input-format)
  - [Constraints](#constraints)
  - [Output Format](#output-format)
  - [Samples](#samples)
    - [Sample Input](#sample-input)
    - [Sample Output](#sample-output)
    - [Explanation](#explanation)
  - [Solving](#solving)
    - [Algorithm](#algorithm)

<!-- /TOC -->

## Description
* Given two arrays of integers
* Determine all integers satisfying the following conditions:
	* The elements of the first array are all factors of the integer being considered
	* The integer being considered is a factor of all elements of the second array
 * These numbers are referred to as being between the two arrays. You must determine how many such numbers exist

## Input Format
* The first line contains two space-separated integers describing the respective values of _n_, the number of elements in array _a_, and _m_, the number of elements in array _b_.
* The second line contains _n_ distinct space-separated integers describing _a_<sub>0</sub>, _a_<sub>1</sub>, ... , _a_<sub>_n_ - 1</sub>.
* The third line contains _m_ distinct space-separated integers describing _b_<sub>0</sub>, _b_<sub>1</sub>, ... , _b_<sub>_m_ - 1</sub>.

## Constraints
* 1 &le; _n_, _m_ &le; 10
* 1 &le; _a_<sub>_i_</sub> &le; 100
* 1 &le; _b_<sub>_i_</sub> &le; 100

## Output Format
Print the number of integers considered to be _between a_ and _b_.

## Samples
### Sample Input
```
2 3
2 4
16 32 96
```

### Sample Output
```
3
```

### Explanation
* 2 and 4 divide evenly into 4, 8, 12 and 16. 
* 4, 8 and 16 divide evenly into 16, 32, 96.
* 4, 8 and 16 are the only three numbers for which each element of A is a factor and each is a factor of all elements of B.


## Solving
```
1 :
2 :
3 :
4 :	4 mod 2 = 0	4 mod 4 = 0
5 :
6 :
7 :
8 :	8 mod 2 = 0	8 mod 4 = 0
9 :
10 :
11 :
12 :	12 mod 2 = 0	12 mod 4 = 0
13 :
14 :
15 :
16 :	16 mod 2 = 0	16 mod 4 = 0
```

```
4 :	16 mod 4 = 0	32 mod 4 = 0	96 mod 4 = 0
8 :	16 mod 8 = 0	32 mod 8 = 0	96 mod 8 = 0
12 :	16 mod 12 = 4	32 mod 12 = 8	96 mod 12 = 0
16 :	16 mod 16 = 0	32 mod 16 = 0	96 mod 16 = 0
```

4, 8, and 16

### Algorithm
1. Read from input and write to respective variables. Place list of numbers in a set to remove duplicates and guarantee ordering
2. Compute the modulo from 1 to the largest integer in array A for each element in A
	1. Flag each element in array A whose modulo result produces 0
3. Compute the modulo for every element in array B with each flag in array A
	1. Print each element in array A whose modulo result produces 0