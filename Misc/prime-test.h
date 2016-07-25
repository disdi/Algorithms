#define PRIME_STD 1
#define PRIME_ROOTN 2
#define PRIME_ROOTN_OPT 3

typedef unsigned long long integer; // just incase we want to switch between smaller and larger int types

/* 
 * Standard prime number testing algorithm 
 * Time: Worst case O(n)
 * Space: O(1) 
 *
 */ 
int isPrime_std_v1(integer n); 

/* 
 *
 * Standard prime number testing algorithm with a slight optimization 
 * Iteration is done only till √n instead of n-1. 
 * Time: Worst case O(√n)
 * Space: O(1) 
 *
 */ 

int isPrime_std_v2(integer n);

/* 
 *
 * This algorithm uses the fact that all prime numbers are of the form 
 * 6k+1 or 6k-1.
 * It's a modification to the √n algorithm , with lesser iterations.  
 *
 */ 

int isPrime_std_v3(integer n);


/* Wrapper to run primality tests */ 

int isPrime(integer n, int AlgoNum); 