#include <stdio.h>
#include "lists.h"



/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: a ptr to the head listint
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t  nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
