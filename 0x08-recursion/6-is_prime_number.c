#include <stdio.h>
#include "main.h"


/**
 * is_divisible - Calculate the prime number
 * @n : enter value
 * @divisor: to divide n
 * Return:is_diviible
 */


int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}

	if (divisor == 2)
	{
		return ((n % 2 == 0) ? 1 : 0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}

	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - its returns 1 if the input is integer
 * @n: value
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	return (!is_divisible(n, n - 1));
}
