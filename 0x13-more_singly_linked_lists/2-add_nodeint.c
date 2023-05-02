#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function add new node the beginning of a listint_t
 * @head: pointer
 * @n: data of new node
 *
 * Return: to pointer
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnewnode = malloc(sizeof(listint_t));

	if (!head || addnewnode)
		return (NULL);

	addnewnode->next = NULL;
	addnewnode->n = n;
	addnewnode->next = *head;
	*head = addnewnode;

	return (addnewnode);
}
