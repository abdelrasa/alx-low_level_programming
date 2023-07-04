#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - Removes the head node of a listint_t linked list
 * @head: Pointer to a pointer to the head of the linked list
 *
 * Return: The data (n) stored in the head node
 *
 * Description: Removes the head node of the linked list and updates
 *              the head pointer to point to the next node.
 *              Returns the data stored in the original head node.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (0);

	next_node = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = next_node;

	return (data);
}
