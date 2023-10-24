#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_listint-  a function that frees a listint_t list.
 * @head: a ptr to the head of listint_t
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
