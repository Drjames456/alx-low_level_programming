#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print
 * Return: void
 */


void print_binary(unsigned long int n)
{
	int jay = sizeof(n) * 8, print = 0;


	while (jay)
	{
		if (n & 1L << --jay)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
