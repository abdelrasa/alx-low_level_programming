#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - Computes the sum of all data in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all data in the linked list
 *
 * Description: Traverses the linked list and accumulates the data values
 *              to compute their sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
