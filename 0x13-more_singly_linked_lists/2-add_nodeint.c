#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to the head of the linked list
 * @n: Data for the new node
 *
 * Return: Pointer to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
