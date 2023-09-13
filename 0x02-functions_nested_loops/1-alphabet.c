#include <stdio.h>
#include "main.h"


/**
 * main- this program print alphabet
 * Return:Always 0
 */


void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
