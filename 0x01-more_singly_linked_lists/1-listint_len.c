#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - counts number of elements in a linked list
 * @h: pointer to head node in linked list
 *
 * Return: number of elemets in a linked list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *node;
	size_t count = 0;

	for (node = (listint_t *)h; node != NULL; node = node->next)
		count++;

	return (count);
}
