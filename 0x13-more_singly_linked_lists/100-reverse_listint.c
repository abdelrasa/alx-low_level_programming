#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: pointer
 *
 * Return: to pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd = NULL;
	listint_t *next = NULL;

	if (!*head || !head)
		return (NULL);

	nd = *head;
	*head = NULL;
	while (nd)
	{
		next = nd->next;
		nd->next = *head;
		*head = nd;
		nd = next;
	}
	return (*head);
}
