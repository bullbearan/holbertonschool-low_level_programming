#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @head: head
 * @n: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;

	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		*head = new;
		return (*head);
	}
	for (ptr = *head; ptr->next; ptr = ptr->next)
	{
	}
	new->prev = ptr;
	new->n = n;
	ptr->next = new;
	new->next = NULL;
	return (new);
}

