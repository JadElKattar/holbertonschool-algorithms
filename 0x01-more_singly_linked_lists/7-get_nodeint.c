#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a listint_t linked list
 * @head: pointer to head of linked list
 * @index: index of node to return
 *
 * Return: pointer to nth node in linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
