#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
 * pop_listint -  a function that deletes the head node of a listint_t
 * @head: a ptr to head of listint_t
 * Return: if the linked list is empty return 0
 */


int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;



	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	*head = node;
	return (n);
}
