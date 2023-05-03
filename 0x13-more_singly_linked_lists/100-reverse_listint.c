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
	listint_t *nd = NULL, *nt = NULL;

	if (!*head || !head)
		return (NULL);

	nd = *head;
	*head = NULL;
	while (nd)
	{
		nt = nd->next;
		nd->next = *head;
		*head = nd;
		nd = nt;
	}
	return (*head);
}
