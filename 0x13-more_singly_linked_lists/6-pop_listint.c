#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - remove head node o list
 * @head: pointer
 *
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *nd;

	if (!head || !*head)
		return (0);

	nd = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = nd;
	return (i);
}
