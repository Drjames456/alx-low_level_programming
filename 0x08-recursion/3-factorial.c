#include <stdio.h>


/**
 * factorial - A function that returns the factorial of a given number.
 * @n: Input number.
 * Return: Factorial of a number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
