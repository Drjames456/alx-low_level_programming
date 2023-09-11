#include <stdio.h>


/**
 * main- this is the main function for numbers
 * possible two digits numbers
 * Return: Always 0 (success)
 */


int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{
			if(a != b)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
