#include<stdio.h>

long fact(int input)
{
    long fct = 1;
    for (int i = 1; i <= input; i++) {
	fct = fct * i;
    }
    return fct;
}
