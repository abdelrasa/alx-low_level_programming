#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add new node to list
 * @head: pointer
 * @n: data for new node
 *
 * Return: to pointer
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnewnode = malloc(sizeof(listint_t));

	if (!addnewnode)
		return (NULL);

	addnewnode->next = NULL;
	addnewnode->n = n;
	addnewnode->next = *head;
	*head = addnewnode;

	return (addnewnode);
}
