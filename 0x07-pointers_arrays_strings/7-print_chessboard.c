#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that  prints the chessboard.
 * @a : this is the array
 * Return: always 0
 */


void print_chessboard(char (*a)[8])
{
	int j, k;


	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
			putchar(a[j][k]);
		putchar('\n');
	}
}
