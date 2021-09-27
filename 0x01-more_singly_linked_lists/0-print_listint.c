#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to head node of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *node;
	size_t count = 0;

	if (h == NULL)
		return (0);

	for (node = (listint_t *)h; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		count++;
	}
	return (count);
}
