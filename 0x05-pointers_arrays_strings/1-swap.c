#include <stdio.h>


/**
 * swap_int - swaps the values of two integers.
 * @a: the first integer
 * @b:the second interger
 * Return: Nothing.
 */



void swap_int(int *a, int *b)
{
	int bta = *a;


	*a = *b;
	*b = bta;
}
