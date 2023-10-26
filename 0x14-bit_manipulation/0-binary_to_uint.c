#include <stdio.h>
#include "main.h"



/**
 * binary_to_uint - it converts a binary number to an unsigned int.
 * @b: a ptr to the binaty number
 * Return: 0 if b is NULL
 */




unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;


	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}

