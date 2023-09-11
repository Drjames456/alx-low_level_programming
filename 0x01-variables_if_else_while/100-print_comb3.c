#include <stdio.h>


/**
 * main- this is the main function for numbers
 * possible two digits numbers
 * Return: Always 0 (success)
 */


int main(void)
{
	int d, p;

	for (d = '0'; d <= '9'; d++)
	{
	for (p = '0'; p <= '9'; p++)
	{
	if (d < p)
	{
	putchar(d);
	putchar(p);
	if (d != '8' || (d == '8' && p != '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

