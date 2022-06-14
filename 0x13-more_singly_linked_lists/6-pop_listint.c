#include "lists.h"
/**
 * pop_listint - check the code
 * @head: parameter
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *point = *head;
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(point);
	return (n);
}
