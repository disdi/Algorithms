#include <stdio.h>
#include <math.h>
#include "prime-test.h"

#define TRUE 1
#define FALSE 0

int isPrime_std_v1(integer n)
{
	if(n%2 == 0 || n%3 == 0 || n == 1)
		return FALSE;
	for(integer i=2; i<n; i++)
		if(n%i == 0)
			return FALSE;
	return TRUE;
}

int isPrime_std_v2(integer n)
{
	if(n%2 == 0 || n%3 == 0 || n == 1)
		return FALSE;
	integer rootN = sqrt(n); 
	for(integer i=2; i<rootN; i++)
		if(n%i == 0)
			return FALSE;

	return TRUE;
}

int isPrime_std_v3(integer n)
{
	if(n == 1 || n%2 == 0 || n%3 == 0)
		return FALSE;

	for(integer i=5; i*i<n; i += 6)
		if(n%i == 0 || (n%(i+2)) == 0)
			return FALSE;
	return TRUE;
}

int isPrime(integer n, int AlgoNum)
{
	switch(AlgoNum)
	{
		case PRIME_STD: 
			return isPrime_std_v1(n);
		case PRIME_ROOTN:
			return isPrime_std_v2(n);
		case PRIME_ROOTN_OPT:
			return isPrime_std_v3(n);

	}
	return FALSE;
}

// Testdata
int main()
{
	integer testData[10] = {1,2,5,4,93,100000007,17,67,4955,2033};
	for(int i=0; i<10; i++)
		{
			printf("Prime v1 (%d) = %d \n",testData[i],isPrime(testData[i],PRIME_STD));
			printf("Prime v2 (%d) = %d \n",testData[i],isPrime(testData[i],PRIME_ROOTN));
			printf("Prime v3 (%d) = %d \n",testData[i],isPrime(testData[i],PRIME_ROOTN_OPT));
		}
}