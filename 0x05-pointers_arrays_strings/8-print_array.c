#include "main.h"
#include <stdio.h>


/**
 * print_array - prints n elements of an array of interger, then a new line
 * @a:An arrays of intergers
 * @n: Numbers of element in an array
 * Return:void
 */


void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
