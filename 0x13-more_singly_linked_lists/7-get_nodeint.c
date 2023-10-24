#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - a  function that returns the nth node of a listint_t
 * @head: a ptr to the head of listint_t
 * @index: the index of the head
 * Return: if the node does not exist, return NULL
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;


	for (node = head, n =  0; node && n < index; node = node->next, n++)
		;
	return (node);
}
