#include "main.h"


/**
 * print_most_numbers- Program that print 0 to 9
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
