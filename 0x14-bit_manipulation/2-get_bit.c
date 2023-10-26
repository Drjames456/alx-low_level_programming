#include <stdio.h>
#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the index, starting from 0 of the bit you want to get
 * @index: the index
 * Return: the value of the bit at index index or -1
 */



int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
