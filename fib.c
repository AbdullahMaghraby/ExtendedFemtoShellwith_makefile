#include<stdio.h>

long fib(int n)
{
    if (n == 0 || n == 1) {
	/* base case */
	return n;
    } else {			/* recursive step */
	return fib(n - 1) + fib(n - 2);
    }
}
