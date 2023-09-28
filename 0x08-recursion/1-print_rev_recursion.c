#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - a function that print a string reverse
 * @s : input
 * Return : void
 */


void _print_rev_recursion(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

