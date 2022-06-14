#include "lists.h"
/**
 * sum_dlistint - check the code
 * @head: head
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	for (ptr = head; ptr; ptr = ptr->next)
	{
		sum += ptr->n;
	}
	return (sum);
}
