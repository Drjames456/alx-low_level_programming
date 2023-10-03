#include <stdio.h>


/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The string to print.
 * Return: nothing;
 */


void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
