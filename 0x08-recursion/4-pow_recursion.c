#include <stdio.h>
#include "main.h"


/**
 * _pow_recursion  - a function that print x ** y
 * @x: input1
 * @y: input2
 * Return:Always 0
 */



int _pow_recursion(int x, int y)
{
	int z, i;


	z = 1;


	for (i = 0; i < y; i++)
	{
		z *= x;
	}
	return (z);

	if (y < 0)
	{
		return (-1);
	}
}
