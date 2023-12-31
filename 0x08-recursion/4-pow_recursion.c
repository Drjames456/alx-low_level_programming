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
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
