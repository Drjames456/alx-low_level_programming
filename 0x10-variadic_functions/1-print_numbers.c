#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>



/**
 * print_numbers - a function that prints numbers, and new line
 * @separator: a string betw the numbers
 * @n: the numbers
 * Return: 0
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;


	va_list p;


	va_start(p, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
