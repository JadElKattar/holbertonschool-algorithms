#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all of the data (n) of a listint_t linked list
 * @head: pointer to head of linked list
 *
 * Return: sum of all data (n) of elements in linked list
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
