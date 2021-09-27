#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to head of linked list
 *
 * Return: head nodes data (n), 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	tmp = *head;
	if (!tmp)
		return (0);
	num = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (num);
}
