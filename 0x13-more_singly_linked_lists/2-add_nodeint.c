#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a node at the beginning of a listint_t
 * @head: a ptr to the head listint_t
 * @n: an interger of the number of nodes
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;


	*head = new;

	return (new);
}

