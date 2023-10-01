#include <stdio.h>
#include "main.h"
#include <math.h>


/**
 * sqrt_a - its give the sqaure root of a number
 * @a:input value
 * @b:sqaure root
 * Return:squre root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}



/**
 * _sqrt_recursion - a function that print natural square root of number
 * @n: interger
 * Return: Squaren root
 */


int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
