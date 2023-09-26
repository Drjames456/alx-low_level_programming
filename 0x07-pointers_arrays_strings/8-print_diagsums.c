#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a : first paramter
 * @size : second parameter
 * Return : Always 0
 */



void print_diagsums(int *a, int size)
{
	int i, j, add1 = 0, add2 = 0;


	for (i = 0; i <= (size * size); i = i + size + 1)
		add1 = add1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		add2 =  add2 + a[j];
	printf("%d, %d\n", add1, add2);
}
