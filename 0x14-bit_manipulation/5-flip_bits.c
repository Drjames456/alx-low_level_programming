#include <stdio.h>
#include "main.h"


/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n:num1
 * @m:num2
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned  long int james = n ^ m;
	unsigned int days = 0;


	while (james)
	{
		if (james & 1ul)
			days++;
		james = james >> 1;
	}
	return (days);
}
