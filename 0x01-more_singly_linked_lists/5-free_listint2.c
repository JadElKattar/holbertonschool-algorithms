#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: pointer to a pointer to head of a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
