#include <stdio.h>



/**
 * main - a function that print a new name
 *
 * Return: always 0
 */



int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n",argv[0]);
	}
	else
	{
		fprintf(stderr, "No arguments provided\n");
		return (1);
	}
	return (0);
}
