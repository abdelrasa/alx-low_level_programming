#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function adds new node at the end of a listint_t
 * @head: pointer
 * @n: data for new node
 *
 * Return: pointer
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_nd = malloc(sizeof(listint_t));
	listint_t *j;

	if (!head || !n_nd)
		return (NULL);

	n_nd->next = NULL;
	n_nd->n = n;
	if (*head == NULL)
	{
		*head = n_nd;
		return (n_nd);
	}
	else
	{
		j = *head;
		while (j->next)
			j = j->next;
		j->next = n_nd;
	}
	return (n_nd);
}
