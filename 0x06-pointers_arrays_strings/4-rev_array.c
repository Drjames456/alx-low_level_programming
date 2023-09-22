#include "main.h"


/**
 * reverse_array - this function reverse the array of an intergers
 * @a: first interger
 * @n: second interger
 * Return: void
 */



void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
